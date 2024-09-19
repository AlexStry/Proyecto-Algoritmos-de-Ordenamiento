# Sistema de Gestión de Empleados
Mi proyecto se basa en un sistema de gestion de empleados con la habilidad de registrar empleados, organizarlos por antiguedad y filtrar los diferentes datos. 
#### Requisitos:
1. Almacenamiento de empleados
2. Estructura de Datos simple
3. Sistema de Sorteo Simple(Insertion Sort)
4. Manejo de Archivos

## SICT0301: Evalúa los componentes
### Presenta Casos de Prueba correctos y completos para todas las funciones y procedimientos del programa
Todos los casos de prueba del proyecto se pueden en contrar dentro del main.cpp donde se prueban las siguientes funciones: 
- Insercion de empleados en la lista
- Ordenamientos de empleados en listas
- Acceso y visualizacion de los empleados

### Hace un análisis de complejidad correcto y completo para todo el programa y sus componentes
**Lista de Empleados**
- Funcion acceso por valor: Esta funcion triene un nivel de complejidad de O(n) por que para accesar un empleado especifico se ocupa recorrer toda la lista
- Funcion de Insercion: La funcion de insercion tiene un nivel de complejidad de O(n) tambien ya que los nuevos empleados se meten al inicio de la lista
- Funcion de Borrado: Para borrar un empleado se tiene que recorrer toda la lista a su posicion, entonces es nivel de complejidad de O((n)
**Ordenamiento de Empleados**
- Ordenamiento insertion sort: En el peor caso, insertion sort tendria un nivel de complejidad de O(n^2) ya que el algoritmo compara todos los elementos anteriores

## SICT0302B: Toma decisiones
### Selecciona y usa una estructura lineal adecuada al problema
En mi proyecto utilizo una lista encadenada simple para registrar a los empleados dentro del sistema. Al utilizar una lista encadenada simple se puede acceder al ulitmo empleado registrado facilmente y tambien se puede encontrar a cualquier otro empleado recorriendo la lista. Cada empleado dentro del programa tiene 4 atributos: ID, nombre, antiguedad y salario. Todos los elementos se pueden insertar, eliminar y mostrar. 

### Selecciona un algoritmo de ordenamiento adecuado al problema
Dentro del proyecto utilizo insertion sort por su simplicidad y su funcionamiento en listas pequeñas. Para mi proyecto imagine una empresa pequeña sin muchos trabajadores por lo cual un sistema rapido de sorteo como insertion sort es capaz y funcional para este proyecto. Se puede encontrar la funcion de ordenar dentro de SistemaNegocios.cpp dentro de la funcion ordenarAntiguedad. 

### Usa un árbol adecuado para resolver un problema
En mi proyecto no implemente unn árbol ya que el tamaño de los datos es pequeño y no se ocupa una estructura de datos muy compleja. Con la pura lista encadenada se pueden manejar los datos de forma eficaz. 

### Compilar:
g++ -std=c++11 main.cpp SistemaNegocios.cpp Empleado.cpp -o gestionEmpleados
### Correr: 
./gestionEmpleados
