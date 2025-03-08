cmake_minimum_required(VERSION 3.30)
project(Ejercicio_1_Persona_Automovil)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ejercicio_1_Persona_Automovil main.cpp
        src/Persona.cpp
        src/Persona.h
        src/Automovil.cpp
        src/Automovil.h)
