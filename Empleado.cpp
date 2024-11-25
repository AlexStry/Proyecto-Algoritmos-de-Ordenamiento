#include "Empleado.h"

Empleado::Empleado(int id, const std::string& nombre, int antiguedad, int salario)
    : id(id), nombre(nombre), antiguedad(antiguedad), salario(salario){}

int Empleado::getId() const{
    return id;
}

std::string Empleado::getNombre() const{
    return nombre;
}


int Empleado::getAntiguedad() const {
    return antiguedad;
}

int Empleado::getSalario() const{
    return salario;
}
