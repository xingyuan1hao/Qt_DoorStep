#include "mainwindow.h"
#include <QApplication>
#include"qtextstream.h"
#include<QTextStream>
#include<QFile>
#include<QMessageBox>
#include<QDebug>
#include<QDir>
#include<QList>
#include<QFileInfoList>
#include<QTextCodec>
#include<QFileInfo>

#include<QDirIterator>

//拷贝文件：
bool copyFileToPath(QString sourceDir ,QString toDir, bool coverFileIfExist)
{
    toDir.replace("\\","/");
    if (sourceDir == toDir){
        return true;
    }
    if (!QFile::exists(sourceDir)){
        return false;
    }
    QDir *createfile     = new QDir;
    bool exist = createfile->exists(toDir);
    if (exist){
        if(coverFileIfExist){
            createfile->remove(toDir);
        }
    }//end if

    if(!QFile::copy(sourceDir, toDir))
    {
        return false;
    }
    return true;
}

//拷贝文件夹：
bool copyDirectoryFiles(const QString &fromDir, const QString &toDir, bool coverFileIfExist)
{
    QDir sourceDir(fromDir);
    QDir targetDir(toDir);
    if(!targetDir.exists()){    /**< 如果目标目录不存在，则进行创建 */
        if(!targetDir.mkdir(targetDir.absolutePath()))
            return false;
    }

    QFileInfoList fileInfoList = sourceDir.entryInfoList();
    foreach(QFileInfo fileInfo, fileInfoList){
        if(fileInfo.fileName() == "." || fileInfo.fileName() == "..")
            continue;

        if(fileInfo.isDir()){    /**< 当为目录时，递归的进行copy */
            if(!copyDirectoryFiles(fileInfo.filePath(),
                targetDir.filePath(fileInfo.fileName()),
                coverFileIfExist))
                return false;
        }
        else{            /**< 当允许覆盖操作时，将旧文件进行删除操作 */
            if(coverFileIfExist && targetDir.exists(fileInfo.fileName())){
                targetDir.remove(fileInfo.fileName());
            }

            //进行文件copy
            if(!QFile::copy(fileInfo.filePath(),
                targetDir.filePath(fileInfo.fileName()))){
                    return false;
            }
        }
    }
    return true;
}



void fun(void)
{
    QString fileName = "D:/1111.txt";

    QString str;
    QFile file(fileName);
    if(!file.open(QIODevice::ReadWrite | QIODevice::Text))
    {

        QMessageBox::warning(NULL,"sdf","can't open",QMessageBox::Yes);
    }
    QTextStream in(&file);

    str = in.readLine();

    file.close();
}

void read1(void)
{
    QFile file("in.txt");

    if(!file.open(QIODevice::ReadWrite | QIODevice::Text))
        return;
    //使用QTextStream读取文件
    QTextStream in(&file);
    while(!in.atEnd())
    {
        QString line = in.readLine();//readAll() 读取所有文本
        //process string line here
    }
#if 0
    //使用QFile读取文件
    while(!file.atEnd())
    {
        QByteArray line = file.readLine();
        QString str(line);
        qDebug()<<str;
    }
#endif
}

void write1(void)
{


    QFile file("out.txt");

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);

    out<< "The magic number is:" << 49 << "\n";

}

void qdir(void)
{
    QDir d("D:/");

    d.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks | QDir::AllDirs);//列出文件,列出隐藏文件（在Unix下就是以.开始的为文件）,不列出符号链接（不支持符号连接的操作系统会忽略）
    d.setSorting(QDir::Size | QDir::Reversed);//按文件大小排序，相反的排序顺序

    const QFileInfoList list = d.entryInfoList();//返回这个目录中所有目录和文件的QFileInfo对象的列表
    QFileInfoList::const_iterator iterator = list.begin();
    qDebug() << "目录和文件的数量:" << d.count();
    qDebug() << "fileName/t/t/tsize/t/t/t";

    while(iterator != list.end())
    {
        qDebug() << (*iterator).fileName() << "/t/t/t" << (*iterator).size();
        iterator++;
    }

    qDebug() << "当前目录:" << d.current();//返回应用程序当前目录。
    qDebug() << "当前目录的绝对路径:" << d.currentPath();//返回应用程序当前目录的绝对路径。

    const QList<QString> list1 = d.entryList();//返回这个目录中所有目录和文件的名称的列表
    QList<QString>::const_iterator iterator1 = list1.begin();
    while(iterator1 != list1.end())
    {
        qDebug() << (*iterator1);
        iterator1++;
    }
}

void fileinfo(void)
{

    QFileInfo info("D:/command.txt");
    qDebug() << info.baseName();//不包括后缀名
    qDebug() << info.bundleName();//只有在Mac OS才有用，其它平台为空字符串
    qDebug() << info.suffix();//后缀名
    qDebug() << info.completeBaseName();//不包括后缀名
    qDebug() << info.completeSuffix();//完整的后缀名

}
//删除文件
void remove(void)
{

    QString fileName = "D:/1.txt";
    QFile file;
    file.remove(fileName);
}
//关于文件名去扩展名等问题
void indexname(void)
{
    QString fileName = "1.txt";
    int index = fileName.lastIndexOf(".");
    fileName.truncate(index);
    QMessageBox::warning(NULL,"tips",fileName,QMessageBox::Yes);
}
//添加路径后缀名
void inpath(void)
{
    QString fileName = "1";
    fileName.prepend("D:/Lib/");

    fileName.append(".txt");
    QMessageBox::warning(NULL,"tips",fileName,QMessageBox::Yes);
}
//QT 遍历目录查找指定文件
QString findfile(const QString &strfilePath, const QString &strnameFilters)
{
    if(strfilePath.isEmpty() || strnameFilters.isEmpty())
    {
        return QString();
    }

    QDir dir;
    QStringList filters;
    filters << strnameFilters;
    dir.setPath(strfilePath);
    dir.setNameFilters(filters);
    QDirIterator iter(dir,QDirIterator::Subdirectories);
    while(iter.hasNext())
    {
        iter.next();
        QFileInfo info = iter.fileInfo();
        if(info.isFile())
        {
            return info.absoluteFilePath().replace('/','\\');

        }
    }
    return QString();

}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //中文支持
   // QTextCodec *codec = QTextCodec::codecForName("UTF-8");
   // QTextCodec::setCodecForCStrings(codec);

    MainWindow w;
    w.show();

    return a.exec();
}
