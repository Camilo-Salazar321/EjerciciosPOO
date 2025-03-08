//
// Created by Asus on 8/03/2025.
//

#include "Pedido.h"

#include <iostream>

Pedido::Pedido(int numeroPedido,std::string estado,Cliente cliente) {
    this->numeroPedido = numeroPedido;
    this->estado = estado;
    this->cliente = cliente;
    this->totalPagar= 0;
}

void Pedido::actualizarEstado(std::string nuevoEstado) {
    if(!nuevoEstado.empty()) {
        this->estado = nuevoEstado;
    }
}

void Pedido::agregarPlato(Plato plato) {
    platos.push_back(plato);
}

void Pedido::mostrarPedido() {
    std::cout << "Numero de pedido: " << this->numeroPedido << " Estado: " << this->estado << std::endl;
    std::cout << "Titular del pedido: "<< std::endl;
    cliente.mostrarInfo();
    std::cout <<std::endl;
    std::cout << "Estos son los platillos incluidos en el pedido:"<<std::endl;
    for (int i = 0; i < platos.size(); i++) {
        this->platos[i].mostrarInfo();
    }
}

int Pedido::calcularTotal() {
    totalPagar=0;
    for (int i = 0; i < platos.size(); i++) {
        this->platos[i].getPrecio();
        totalPagar+= this->platos[i].getPrecio();
}
    return totalPagar;
}

