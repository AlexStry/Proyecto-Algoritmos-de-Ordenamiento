#include "SistemaNegocios.h"
#include "Empleado.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <climits>
#include <vector>

void SistemaNegocios::agregarEmpleado(int id, const std::string& nombre, int antiguedad, int salario) {
    for (const auto& emp : empleados) {
        if (emp.getId() == id) {
            std::cout << "Error: Ya existe un empleado con el ID: " << id << std::endl;
            return;
        }
    }
    Empleado nuevoEmpleado(id, nombre, antiguedad, salario);
    empleados.push_back(nuevoEmpleado);
}

void SistemaNegocios::ordenarAntiguedad(){
    std::vector<Empleado> temp(empleados.begin(), empleados.end());
    for (size_t i = 1; i < temp.size();i++) {
        Empleado key = temp[i];
        int j = i - 1;
        while (j >= 0 && temp[j].getAntiguedad() > key.getAntiguedad()) {
            temp[j + 1] = temp[j];
            j = j - 1;
        }
        temp[j + 1] = key;
    }
    empleados.clear();
    empleados.insert(empleados.begin(), temp.begin(), temp.end());
}


void SistemaNegocios::mostrarEmpleados() const {
    if (empleados.empty()) {
        std::cout << "No hay empleados registrados." << std::endl;
        return;
    }
    std::cout << "\nLista de Empleados:" << std::endl;
    std::cout << "===================" << std::endl;
    for (const auto& empleado : empleados) {
        std::cout << "ID: " << empleado.getId() << ", Nombre: " << empleado.getNombre() << ", Antiguedad: " << empleado.getAntiguedad() << ", Salario: $" << empleado.getSalario()<< std::endl;
    }
}

void SistemaNegocios::cargarEmpleadosDesdeArchivo(const std::string& nombreArchivo) {
    std::ifstream archivo(nombreArchivo);
    if (!archivo.is_open()){
        std::cerr << "No se pudo abrir el archivo!" << nombreArchivo << std::endl;
        return;
    }
    empleados.clear();
    std::string linea;
    while (std::getline(archivo, linea)) {
        std::istringstream stream(linea);
        int id, antiguedad, salario;
        std::string nombre;
        if (stream >> id >> nombre >>antiguedad >> salario) {
            agregarEmpleado(id, nombre, antiguedad, salario);
        } else {
            std::cerr << "Error al leer la linea: " << linea << std::endl;
        }
    }
    archivo.close();
    std::cout << "Empleados cargados exitosamente!"<< std::endl;
}

void SistemaNegocios::guardarEmpleadosEnArchivo(const std::string& nombreArchivo) const {
    std::ofstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        std::cerr << "No se pudo abrir el archivo"<<std::endl;
        return;
    }
    for (const auto& empleado : empleados){
        archivo << empleado.getId() << " " << empleado.getNombre() << " " << empleado.getAntiguedad() << " " << empleado.getSalario() << std::endl;
    }
    archivo.close();
    std::cout << "Empleados guardados exitosamente!"<< std::endl;
}

void SistemaNegocios::buscarPorId(int id) const{
    for (const auto& empleado : empleados) {
        if (empleado.getId() == id) {
            std::cout << "\nEmpleado encontrado:" << std::endl;
            std::cout << "ID: " << empleado.getId() << ", Nombre: "  << empleado.getNombre() << ", Antiguedad: " << empleado.getAntiguedad() << ", Salario: $" << empleado.getSalario() << std::endl;
            return;
        }
    }
    std::cout << "No se encontro ningun empleado con ID: " << id << std::endl;
}


void SistemaNegocios::buscarPorRangoSalario(int min, int max) const {
    bool encontrado = false;
    std::cout << "\nEmpleados con salario entre $" << min << " y $" << max << ":" << std::endl;
    for (const auto& empleado : empleados) {
        if (empleado.getSalario() >= min && empleado.getSalario() <= max) {
            std::cout << "ID: " << empleado.getId() << ", Nombre: " << empleado.getNombre()<< ", Salario: $" << empleado.getSalario() << std::endl;
            encontrado = true;
        }
    }
    if (!encontrado){
        std::cout << "No se encontraron empleados en ese rango." << std::endl;
    }
}

void SistemaNegocios::generarEstadisticas() const {
    if (empleados.empty()) {
        std::cout << "No hay empleados registrados para generar estadisticas." << std::endl;
        return;
    }
    int totalEmpleados = empleados.size();
    double totalSalarios = 0;
    int maxAntiguedad = 0;
    int minAntiguedad = INT_MAX;
    for (const auto& empleado : empleados){
        totalSalarios += empleado.getSalario();
        maxAntiguedad = std::max(maxAntiguedad, empleado.getAntiguedad());
        minAntiguedad = std::min(minAntiguedad, empleado.getAntiguedad());
    }
    std::cout << "\nEstadisticas de Empleados:" << std::endl;
    std::cout << "========================" << std::endl;
    std::cout << "Total de empleados: " << totalEmpleados << std::endl;
    std::cout << "Promedio de salarios: $" << (totalSalarios / totalEmpleados) << std::endl;
    std::cout << "Antigüedad máxima: " << maxAntiguedad << " años" << std::endl;
    std::cout << "Antigüedad mínima: " << minAntiguedad << " años" << std::endl;
}
