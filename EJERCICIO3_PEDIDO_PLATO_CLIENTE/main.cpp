#include <iostream>
#include "src/Cliente.h"
#include "src/Pedido.h"
#include "src/Cliente.h"

int main() {

    //crear objetos de tipo cliente
    Cliente pablo("Pablo","0202020202");
    Cliente manuela("Manuela","111111111");

    //crear objetos de tipo plato
    Plato choripan("Choripan",12000.00);
    Plato hamburguesa("Hamburguesa",15000.00);
    Plato papaRellena("Papa rellena",7000.00);
    Plato aborrajado("Aborrajado",6000.00);

    //crear objetos de tipo pedido

    Pedido pedido1(100,"En preparacion",pablo);
    Pedido pedido2(101, "En preparacion",manuela);

    //Agregar platos al pedido
    pedido1.agregarPlato(choripan);
    pedido2.agregarPlato(hamburguesa);
    pedido2.agregarPlato(papaRellena);
    pedido1.agregarPlato(aborrajado);

    //mostrar informacion de los pedidos y el total a pagar

    pedido1.mostrarPedido();
    std::cout << "El total a pagar es: " << pedido1.calcularTotal() << std::endl;

    std::cout << std::endl;

    pedido2.mostrarPedido();
    std::cout << "El total a pagar es: " << pedido2.calcularTotal() <<std::endl;

    //cambiar estado de un pedido y volver a mostrar los datos

    pedido2.actualizarEstado("Entregado");

    pedido2.mostrarPedido();
    std::cout << "El total a pagar es: " << pedido2.calcularTotal() <<std::endl;

    return 0;
}