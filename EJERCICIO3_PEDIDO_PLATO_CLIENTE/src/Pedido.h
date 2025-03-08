//
// Created by Asus on 8/03/2025.
//

#ifndef PEDIDO_H
#define PEDIDO_H

#include <vector>

#include "Cliente.h"
#include "Plato.h"


class Pedido {
private:
    int numeroPedido;
    std::string estado;
    Cliente cliente;
    std::vector<Plato>platos;
    int totalPagar;
public:
    Pedido()=default;
    Pedido(int numeroPedido,std::string estado,Cliente cliente);
    void actualizarEstado(std::string nuevoEstado);
    void agregarPlato(Plato plato);
    void mostrarPedido();
    int calcularTotal();


};



#endif //PEDIDO_H
