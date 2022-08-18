cmake_minimum_required(VERSION 3.5)

project(Punto8Prueba LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Punto8Prueba main.cpp)

install(TARGETS Punto8Prueba
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
