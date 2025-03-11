#include <iostream>
#include "src/Usuario.h"
#include "src/Libro.h"

int main() {

    //Crear objetos de tipo libro
    Libro rayuela("Rayuela","Julio Cortazar","Realismo magico",1001);
    Libro orgulloPrejuicio("Orgullo y prejuicio", "Jane Austen", "Novela clasica", 1002);
    Libro farenheit("Fahrenheit 451","Ray Bradbury", "Ciencia Ficcion",1003);
    Libro retratoDorianGray("El retrato de Dorian Gray", "Oscar Wilde", "Ficcion gotica", 1004);
    Libro harryPotterElPrisionero("Harry Potter y el prisionero de Azkaban","J.K Rowling","Fantasia",1005);

    //Crear objetos de tipo usuario
    Usuario santiago(50501,"Santiago");
    Usuario carmen(25242,"Carmen");

    // Usuarios compran libros
    carmen.comprarLibro(rayuela);
    carmen.comprarLibro(orgulloPrejuicio);
    santiago.comprarLibro(farenheit);
    santiago.comprarLibro(harryPotterElPrisionero);
    carmen.comprarLibro(retratoDorianGray);

    std::cout << "Esta es la informacion del usuario Carmen: \n" << std::endl;
    carmen.mostrarInfo();
    std::cout <<  std::endl;
    std::cout << "Esta es la informacion del usuario Santiago: \n" << std::endl;
    santiago.mostrarInfo();
    std::cout <<  std::endl;

    //Usuarios regalan libros

    carmen.regalarLibro(1001);
    santiago.regalarLibro(1003);

    std::cout << "Esta es la informacion del usuario Carmen despues de regalar un libro: \n" << std::endl;
    carmen.mostrarInfo();
    std::cout <<  std::endl;
    std::cout << "Esta es la informacion del usuario Santiago despues de regalar un libro: \n" << std::endl;
    santiago.mostrarInfo();
    std::cout <<  std::endl;

    //Cambiar estado de algunos libros

    farenheit.actualizarEstado("Usado");
    rayuela.actualizarEstado("Usado");

    //mostrar la info de los libros

    std::cout << "Esta es la informacion de cada uno de los libros despues de cambiar el estado de algunos \n" << std::endl;

    retratoDorianGray.obtenerInformacion();
    rayuela.obtenerInformacion();
    harryPotterElPrisionero.obtenerInformacion();
    orgulloPrejuicio.obtenerInformacion();
    farenheit.obtenerInformacion();

    return 0;
}