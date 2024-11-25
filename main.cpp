#include "SistemaNegocios.h"
#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main() {
    SistemaNegocios sistema;
    int opcion;
    do {
        cout << "\nSistema de Gestion de Empleados" << endl;
        cout << "=============================" << endl;
        cout << "1. Agregar Empleado" << endl;
        cout << "2. Mostrar Empleados" << endl;
        cout << "3. Ordenar por Antiguedad" << endl;
        cout << "4. Cargar Empleados desde Archivo" << endl;
        cout << "5. Guardar Empleados en Archivo" << endl;
        cout << "6. Buscar Empleado por ID" << endl;
        cout << "7. Buscar por Rango de Salario" << endl;
        cout << "8. Generar Estadisticas" << endl;
        cout << "9. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        while(cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Entrada invalida. Ingrese un número entre 1 y 9: ";
            cin >> opcion;
        }
        switch(opcion) {
            case 1: {
                int id, antiguedad, salario;
                string nombre;
                cout << "Ingrese ID: ";
                cin >> id;
                cout << "Ingrese Nombre: ";
                cin.ignore();
                getline(cin, nombre);
                cout << "Ingrese Antigüedad (años): ";
                cin >> antiguedad;
                cout << "Ingrese Salario: ";
                cin >> salario;
                sistema.agregarEmpleado(id, nombre, antiguedad, salario);
                break;
            }
            case 2:
                sistema.mostrarEmpleados();
                break;
            case 3:
                sistema.ordenarAntiguedad();
                cout << "Empleados ordenados por antigüedad:" << endl;
                break;
            case 4: {
                string nombreArchivo;
                cout << "Ingrese nombre del archivo: ";
                cin >> nombreArchivo;
                sistema.cargarEmpleadosDesdeArchivo(nombreArchivo);
                break;
            }
            case 5: {
                string nombreArchivo;
                cout << "Ingrese nombre del archivo para guardar: ";
                cin >> nombreArchivo;
                sistema.guardarEmpleadosEnArchivo(nombreArchivo);
                break;
            }
            case 6:{
                int id;
                cout << "Ingrese ID del empleado a buscar: ";
                cin >> id;
                sistema.buscarPorId(id);
                break;
            }
            case 7: {
                int min, max;
                cout << "Ingrese salario minimo: ";
                cin >> min;
                cout << "Ingrese salario máximo: ";
                cin >> max;
                sistema.buscarPorRangoSalario(min, max);
                break;
            }
            
            case 8:
                sistema.generarEstadisticas();
                break;
            case 9:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
        }
    } while(opcion != 9);
    return 0;
}
