//
// Created by Asus on 8/03/2025.
//

#ifndef PLATO_H
#define PLATO_H
#include <string>


class Plato {
private:
    std::string nombre;
    float precio;
public:
    Plato()=default;
    Plato(std::string nombre, float precio);
    void mostrarInfo();
    float getPrecio();

};



#endif //PLATO_H
