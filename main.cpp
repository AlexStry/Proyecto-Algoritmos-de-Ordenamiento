#include "SistemaNegocios.h"
#include "Empleado.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    SistemaNegocios sistema;
    int opcion;
    do {
        cout << "Menu:\n";
        cout << "1. Agregar Empleado\n";
        cout << "2. Mostrar Empleados\n";
        cout << "3. Ordenar por Antigüedad\n";
        cout << "4. Cargar Empleados desde Archivo\n";
        cout << "5. Salir\n";
        cout << "Ingrese una opción: ";
        cin >> opcion;

        while(cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Entrada inválida. Ingrese un número entre 1 y 5: ";
            cin >> opcion;
        }

        if (opcion == 1) {
            int id, antiguedad, salario;
            string nombre;
            cout << "Ingrese ID (int): ";
            cin >> id;
            cout << "Ingrese Nombre (str): ";
            cin.ignore();
            getline(cin, nombre);
            cout << "Ingrese Antigüedad (int): ";
            cin >> antiguedad;
            cout << "Ingrese Salario (int): ";
            cin >> salario;
            sistema.agregarEmpleado(id, nombre, antiguedad, salario);
        } else if (opcion == 2){
            sistema.mostrarEmpleados();
        } else if (opcion == 3) {
            sistema.ordenarAntiguedad();
            sistema.mostrarEmpleados();
        } else if (opcion == 4){
            string nombreArchivo;
            cout << "Ingrese el nombre del archivo: ";
            cin.ignore();
            getline(cin, nombreArchivo);
            sistema.cargarEmpleadosDesdeArchivo(nombreArchivo);
        } else if (opcion != 5) {
            cout << "Opción no válida. Por favor, ingrese un número entre 1 y 5.\n";
        }
    } while (opcion != 5);

    return 0;
}
