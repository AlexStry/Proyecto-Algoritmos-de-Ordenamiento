#include "Empleado.h"
#include <iostream>
using namespace std;

Empleado::Empleado(): salario(0), antiguedad(0) {}

Empleado::Empleado(int id_, string nombre_, int antiguedad_, int salario_) : id(id_), nombre(nombre_), antiguedad(antiguedad_), salario(salario_) {}

int Empleado::getId() const {
    return id;
}

string Empleado::getNombre() const{
    return nombre;
}

int Empleado::getAntiguedad() const {
    return antiguedad;
}

int Empleado::getSalario() const {
    return salario;
}

void Empleado::setNombre(string nombre_){
    nombre = nombre_;
}

void Empleado::setAntiguedad(int antiguedad_){
    antiguedad = antiguedad_;
}

void Empleado::setSalario(int salario_){
    salario = salario_;
}
