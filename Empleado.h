#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
using namespace std;

class Empleado{
    public:
    Empleado();
    Empleado(int, string, int, int);
    int getId() const;
    string getNombre() const;
    int getAntiguedad() const;
    int getSalario() const;
    void setNombre(string);
    void setAntiguedad(int);
    void setSalario(int);
    
    private:
    int id;
    string nombre;
    int antiguedad;
    int salario;
};

#endif 
