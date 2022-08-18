cmake_minimum_required(VERSION 3.5)

project(Punto6Prueba LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Punto6Prueba main.cpp)

install(TARGETS Punto6Prueba
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
