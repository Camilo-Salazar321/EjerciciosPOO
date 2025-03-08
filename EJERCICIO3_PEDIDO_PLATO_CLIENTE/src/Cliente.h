//
// Created by Asus on 8/03/2025.
//

#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>


class Cliente {
private:
    std::string nombre;
    std::string telefono;
public:
    Cliente()=default;
    Cliente(std::string nombre, std::string telefono);
    void mostrarInfo();

};



#endif //CLIENTE_H
