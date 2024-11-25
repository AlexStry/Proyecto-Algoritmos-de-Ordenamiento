#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>

class Empleado {
public:
    Empleado(int id, const std::string& nombre, int antiguedad, int salario);
    int getId() const;
    std::string getNombre() const;
    int getAntiguedad() const;
    int getSalario() const;
private:
    int id;
    std::string nombre;
    int antiguedad;
    int salario;
};

#endif
