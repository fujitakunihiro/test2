cmake_minimum_required(VERSION 3.1)
project(hello_world CXX)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -O0 -pg")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -s")

add_executable(main_app ../AppFW/AppBase.cpp
    ../AppFW/HandlerInterface.cpp
    ../AppImpl/main.cpp
    ../AppImpl/Handler.cpp
    ../AppImpl/TestApp.cpp)
