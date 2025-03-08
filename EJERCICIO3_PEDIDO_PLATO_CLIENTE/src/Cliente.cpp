//
// Created by Asus on 8/03/2025.
//

#include "Cliente.h"

#include <iostream>
#include <ostream>

Cliente::Cliente(std::string nombre, std::string telefono) {
    this->nombre = nombre;
    this->telefono = telefono;
}

void Cliente::mostrarInfo() {
    std::cout << "Nombre: " << this->nombre << " Telefono: " << this->telefono << std::endl;
}
