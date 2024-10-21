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
    void cargarEmpleadosDesdeArchivo(const std::string& nombreArchivo);

    private:
    std::list<Empleado> empleados;
};


#endif
