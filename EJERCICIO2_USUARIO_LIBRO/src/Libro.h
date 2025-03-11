//
// Created by Asus on 8/03/2025.
//

#ifndef LIBRO_H
#define LIBRO_H
#include <string>


class Libro {
private:
    std::string titulo;
    std::string autor;
    std::string genero;
    int idLibro;
    std::string estado;
public:
    Libro()=default;
    Libro(std::string titulo, std::string autor, std::string genero, int idLibro);
    int getIdLibro();
    void obtenerInformacion();
    void actualizarEstado(std::string nuevoEstado);
};



#endif //LIBRO_H
