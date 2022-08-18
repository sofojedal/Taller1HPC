cmake_minimum_required(VERSION 3.5)

project(Punto9Prueba LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Punto9Prueba main.cpp)

install(TARGETS Punto9Prueba
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
