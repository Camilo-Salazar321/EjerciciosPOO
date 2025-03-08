//
// Created by Asus on 8/03/2025.
//

#include "Automovil.h"

#include <iostream>
#include <ostream>

Automovil::Automovil(std::string marca, int anio) {
    this->marca = marca;
    this->anio = anio;
}

void Automovil::mostrarInfo() {
    std::cout << "Los datos del automovil son: \n " <<std::endl;
    std::cout << "Marca: "<< this->marca << std::endl;
    std::cout << "Anio: " << this->anio <<"\n"<<std::endl;
}
