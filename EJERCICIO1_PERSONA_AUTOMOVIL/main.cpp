#include <iostream>
#include "src/Persona.h"
#include "src/Automovil.h"


int main() {

    //crear instancias de la clase Persona
    Persona sofiaDurango("Sofia", 19);
    Persona federicoPerez("Federico", 30);

    //crear instancias de la clase automovil
    Automovil Renault("Renault", 2020);
    Automovil Honda("Honda", 2025);

    //Asingar automóviles a personas
    federicoPerez.agregarAutomovil(Honda);
    sofiaDurango.agregarAutomovil(Renault);

    //Llamar al metodo mostrarinfo() de la clase Persona para ver la informacion"
    federicoPerez.mostrarInfo();
    sofiaDurango.mostrarInfo();


    return 0;
}