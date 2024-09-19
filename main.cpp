#include "SistemaNegocios.h"
#include "Empleado.h"
#include <iostream>

int main() {
    SistemaNegocios sistema;
    sistema.agregarEmpleado(1, "Juan Perez", 5, 50000.0);
    sistema.agregarEmpleado(2, "Ana Lopez", 2, 55000.0);
    sistema.agregarEmpleado(3, "Carlos Gomez", 10, 60000.0);
    sistema.agregarEmpleado(4, "Maria Sanchez", 3, 48000.0);
    std::cout << "Empleados antes de ordenar por antigüedad:" << std::endl;
    sistema.mostrarEmpleados();
    sistema.ordenarAntiguedad();
    std::cout << "\nEmpleados después de ordenar por antigüedad:" << std::endl;
    sistema.mostrarEmpleados();

    return 0;
}
