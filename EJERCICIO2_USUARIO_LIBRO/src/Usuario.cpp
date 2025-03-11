//
// Created by Asus on 8/03/2025.
//

#include "Usuario.h"

#include <iostream>
#include <ostream>

Usuario::Usuario(int id, std::string nombre) {
    this->id = id;
    this->nombre = nombre;
}

void Usuario::mostrarInfo() {
    std::cout << "Esta es la informacion del usuario: \n" << std::endl;
    std::cout << "Nombre: " << this->nombre << " Id: " << this->id << std::endl;
    for (int i = 0; i < this->libros.size(); i++) {
        Libro libroMostrar = this->libros[i];
        libroMostrar.obtenerInformacion();
    }

}

void Usuario::regalarLibro(int idLibroRegalo) {
    for (int i = 0; i < this->libros.size(); i++) {
        //busca en el vector si el id del libro coincide con alguno
        if (idLibroRegalo == this->libros[i].getIdLibro()) {
            //elimina el libro en la posición i del vector
            this->libros.erase(this->libros.begin() + i);
        }
    }
}

void Usuario::comprarLibro(Libro libro) {
    this->libros.push_back(libro);
}
