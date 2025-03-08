## Realización del tercer ejercicio ##

```mermaid
classDiagram
    class Cliente {
        - string nombre
        - string telefono

        + Cliente(nombre,telefono)
        + mostrarInfo()
    }
    class Pedido {
        - int numeroPedido
        - string estado
        - Cliente cliente
        - list<Plato> platos
        - int totalPagar
        + Pedido(numero, estado, cliente)
        + actualizarEstado()
        + agregarPlato(plato)
        + mostrarPedido()
        + int calcularTotal()
    }
    class Plato {
        - string nombre
        - float precio

        Plato(nombre, precio)
        mostrarInfo()
    }
    Pedido o-- Plato : contiene
    Pedido --> Cliente : pertenece a
