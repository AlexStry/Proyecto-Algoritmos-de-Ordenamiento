#include "SistemaNegocios.h"
#include <iostream>
#include <fstream>
#include <sstream>

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

void SistemaNegocios::cargarEmpleadosDesdeArchivo(const std::string& nombreArchivo) {
    std::ifstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        std::cerr << "No se pudo abrir el archivo " << nombreArchivo << std::endl;
        return;
    }
    std::string linea;
    while (std::getline(archivo, linea)) {
        std::istringstream stream(linea);
        int id, antiguedad, salario;
        std::string nombre;
        if (stream >> id >> nombre >> antiguedad >> salario) {
            agregarEmpleado(id, nombre, antiguedad, salario);
        } else {
            std::cerr << "Error al leer la línea: " << linea << std::endl;
        }
    }
    archivo.close();
}
