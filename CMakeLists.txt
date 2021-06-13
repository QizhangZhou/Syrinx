#cmake verson，指定cmake版本 
cmake_minimum_required(VERSION 3.14.0)

#设置语言
add_definitions(-std=c++11)
#set(CMAKE_CXX_STANDARD 11)

#设置环境变量
add_definitions( -DGPU -DCUDNN )

#project name，指定项目的名称
set(PROJECT_NAME someBase)
project(${PROJECT_NAME})


#head file path，头文件目录
include_directories(
    ./unionfind
    )

#source directory，源文件目录
aux_source_directory(src .)

#add link library，添加可执行文件所需要的库，就添加该库的名称
#target_link_libraries(${PROJECT_NAME} name)

#add executable file，添加要编译的可执行文件
set(DIR_SRCS 
    main.cpp
    ./unionfind/unionfind.cpp
    
    ./syntax/lamda_expressions.cpp
    ./syntax/map_container.cpp
    )
add_executable(${PROJECT_NAME} ${DIR_SRCS})



