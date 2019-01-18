# qttestlib CMakeLists.txt

set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTOUIC ON)

find_package(Qt5Widgets REQUIRED)

set(SOURCES
    widget.cpp)

set(HEADERS
    widget.h
    qttestlib_global.h)

add_library(qttestlib STATIC ${SOURCES} ${HEADERS})
target_include_directories(qttestlib PUBLIC .)
target_compile_definitions(qttestlib PRIVATE QTTESTLIB_LIBRARY)
target_link_libraries(qttestlib Qt5::Widgets)

# end of file
