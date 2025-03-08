//
// Created by Asus on 8/03/2025.
//

#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
#include <string>



class Automovil {
private:
    std::string marca;
    int anio;
public:
    Automovil()=default;
    Automovil(std::string marca, int anio);
    void mostrarInfo();

};



#endif //AUTOMOVIL_H
