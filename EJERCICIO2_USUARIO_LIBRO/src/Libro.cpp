//
// Created by Asus on 8/03/2025.
//

#include "Libro.h"

#include <iostream>
#include <ostream>

Libro::Libro(std::string titulo, std::string autor, std::string genero, int idLibro) {
    this->titulo = titulo;
    this->autor = autor;
    this->genero = genero;
    this->idLibro = idLibro;
    this->estado = "Nuevo";
}

int Libro::getIdLibro() {
    return this->idLibro;
}

void Libro::obtenerInformacion() {
    std::cout << "Esta es la informacion del libro solicitado: \n" << std::endl;
    std::cout<<"Numero de identificacion del libro: "<< this->idLibro <<std::endl;
    std::cout<< "Libro: " << this->titulo << " de " <<this->autor << " del genero literario "<< genero <<std::endl;
    std::cout<< "Estado del libro: " << this->estado << "\n" <<std::endl;
}

void Libro::actualizarEstado(std::string nuevoEstado) {
    this->estado = nuevoEstado;
}
