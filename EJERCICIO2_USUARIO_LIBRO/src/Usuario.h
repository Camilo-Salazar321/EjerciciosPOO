//
// Created by Asus on 8/03/2025.
//

#ifndef USUARIO_H
#define USUARIO_H
#include "Libro.h"
#include <vector>


class Usuario {
private:
    int id;
    std::string nombre;
    std::vector<Libro> libros;
public:
    Usuario()=default;
    Usuario(int id, std::string nombre);
    void mostrarInfo();
    void regalarLibro(int idLibro);
    void comprarLibro(Libro libro);
};



#endif //USUARIO_H
