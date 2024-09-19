#include "SistemaNegocios.h"
#include <iostream>

void SistemaNegocios::agregarEmpleado(int id, string nombre, int antiguedad, int salario){
    Empleado nuevoEmpleado(id, nombre, antiguedad, salario);
    empleados.push_back(nuevoEmpleado);
}

void SistemaNegocios::ordenarAntiguedad(){
    std::vector<Empleado> vecEmpleado(empleados.begin(), empleados.end());
    for(int i = 1; i < vecEmpleado.size(); i++){
        Empleado temp = vecEmpleado[i];
        int j = i - 1;
        while (j >= 0 && vecEmpleado[j].getAntiguedad() > temp.getAntiguedad()){
            vecEmpleado[j + 1] = vecEmpleado[j];
            j--;
        }
        vecEmpleado[j + 1] = temp;
    }
    empleados.assign(vecEmpleado.begin(), vecEmpleado.end());
}

void SistemaNegocios::mostrarEmpleados() const{
    for(const auto& empleado : empleados){
        std::cout<<"ID: "<<empleado.getId()<<", Nombre: "<<empleado.getNombre()<<", Antiguedad: "<<empleado.getAntiguedad()<<", Salario: "<<empleado.getSalario()<<std::endl;
    }
}
