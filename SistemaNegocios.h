#ifndef SISTEMANEGOCIOS_H
#define SISTEMANEGOCIOS_H
#include <list>
#include <string>
#include "Empleado.h"

class SistemaNegocios {
public:
    void agregarEmpleado(int id, const std::string& nombre, int antiguedad, int salario);
    void ordenarAntiguedad();
    void mostrarEmpleados() const;
    void cargarEmpleadosDesdeArchivo(const std::string& nombreArchivo);
    void guardarEmpleadosEnArchivo(const std::string& nombreArchivo) const;
    void buscarPorId(int id) const;
    void buscarPorRangoSalario(int min, int max) const;
    void generarEstadisticas() const;

private:
    std::list<Empleado> empleados;
};

#endif
