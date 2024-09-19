#ifndef SISTEMANEGOCIOS_H
#define SISTEMANEGOCIOS_H
#include <list>
#include <vector>
#include "Empleado.h"
#include <string>

class SistemaNegocios{
    public:
    void agregarEmpleado(int, string, int, int);
    void ordenarAntiguedad();
    void mostrarEmpleados() const;

    private:
    std::list<Empleado> empleados;
};


#endif
