//
// Created by Asus on 8/03/2025.
//

#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <iostream>
#include "Automovil.h"


class Persona {
private:
    std::string nombre;
    int edad;
    Automovil automovil;
public:
    Persona()=default;
    Persona(std::string nombre, int edad);
    void agregarAutomovil(Automovil automovil);
    void mostrarInfo();

};



#endif //PERSONA_H
