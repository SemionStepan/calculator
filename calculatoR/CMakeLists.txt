cmake_minimum_required(VERSION 3.5)

project(calculator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(calculator main.cpp calculator.h calculator.cpp app.h app.cpp)

install(TARGETS calculator
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
