//
// Created by Asus on 8/03/2025.
//

#include "Plato.h"

#include <iostream>
#include <ostream>

Plato::Plato(std::string nombre, float precio) {
    this->nombre = nombre;
    this->precio = precio;
}

void Plato::mostrarInfo() {
    std::cout << "Plato: " << this->nombre << " Precio: $" << this->precio << std::endl;
}

float Plato::getPrecio() {
    return this->precio;
}
