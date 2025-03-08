//
// Created by Asus on 8/03/2025.
//

#include "Persona.h"

#include <string>
#include <iostream>


Persona::Persona(std::string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
}
void Persona::agregarAutomovil(Automovil automovil) {
    this->automovil = automovil;
}
void Persona::mostrarInfo() {
    std::cout << "La informacion del usuario es la siguiente: \n " << std::endl;
    std::cout << "Nombre: " << this->nombre<< std::endl;
    std::cout << "Edad: " << this->edad << "\n" <<std::endl;
    this->automovil.mostrarInfo();


}
