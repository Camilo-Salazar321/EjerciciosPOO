cmake_minimum_required(VERSION 3.30)
project(EJERCICIO3_PEDIDO_PLATO_CLIENTE)

set(CMAKE_CXX_STANDARD 20)

add_executable(EJERCICIO3_PEDIDO_PLATO_CLIENTE main.cpp
        src/Pedido.cpp
        src/Pedido.h
        src/Cliente.cpp
        src/Cliente.h
        src/Plato.cpp
        src/Plato.h)
