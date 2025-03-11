cmake_minimum_required(VERSION 3.30)
project(EJERCICIO2_USUARIO_LIBRO)

set(CMAKE_CXX_STANDARD 20)

add_executable(EJERCICIO2_USUARIO_LIBRO main.cpp
        src/Usuario.cpp
        src/Usuario.h
        src/Libro.cpp
        src/Libro.h)
