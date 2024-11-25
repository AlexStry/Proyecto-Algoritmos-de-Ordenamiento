# Sistema de Gestión de Empleados

## Descripción del Proyecto
Este proyecto implementa un sistema de gestión de empleados que permite registrar, organizar y analizar información de empleados de una empresa. El sistema incluye funcionalidades para ordenamiento, búsqueda y análisis de datos.

## Componentes Principales
- Almacenamiento de empleados en estructura de datos
- Sistema de ordenamiento por antigüedad
- Gestión de archivos para persistencia de datos
- Análisis estadístico de datos de empleados
- Búsqueda y filtrado de empleados

## Descripcion del Avance 1
En el avance 1, se ipmlemento el insertion sort para filtrar los datos de los Empleados. Esta version del codigo fue muy basica y no hubo interaccion con el usuario, solo casos de prueba dentro del main. 

## Descripcion del Avance 2
En el avance 2 se mejoro la interaccion con el usuario, agregando un menu y la implementacion de utilizar un archivo de arga txt para guardar datos. 

## Descripcion del Avance 3
En el avance 3 se implemento un abase da datos mas grande, mas interaccion con el usuario y varias opciones mas de filtracion de datos, busqueda de empleados y analisis de datos. 

## Descripción de las entradas del proyecto
El proyecto de entrada toma un documento txt. Dentro de los docuemtnos del proyecto adjunte un documento llamado Empleados.txt que contiene 100 objetos de empleados con el formato: ID, Nombre, Antiguedad, Salario.

## Descripción de las salidas del proyecto
Prueba 1(Crear y guardar un nuevo empleado):
1. Compilar y ejecutar el programa.
2. Ingresa el numero 2 al menu para revisar que no hay un empleado cargado.
3. Presionar 4 y cargar los empleados desde el archivo externo ingresando el nombre del archivo.
4. Presionar 2 otra vez y revisar que los empleados cargaron.
5. Presionar 3 para que ordene los empleados por antiguedad y luego presiona 2 para ver los empleados ordenados.
6. Agregar cualquier empleado con el numero 1 en el menu. Ingresar: ID, Nombre, Intiguedad, Salario.
7. Presionar 6 en el menu principal para buscar un empleado por id.
8. Ingresar el id del empleado creado.
9. Apretar 9 para salir.

Prueba 2:
1. Cargar empleados al programa.
2. Presionar 7 en el menu para filtrar por salario.
3. Ingresar salario minimo.
4. Ingresar salario maximo.
5. Ingresar 8 en el menu principal y ver estadisticas de los empleados.
6. Apretar 9 para salir.

## Evalúa los componentes (SICT0301)
### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.
### Algoritmo de Ordenamiento (Insertion Sort)
- Mejor caso: O(n) - Lista ya ordenada
- Caso promedio: O(n²)
- Peor caso: O(n²) - Lista ordenada inversamente
- En el peor caso, insertion sort tendria un nivel de complejidad de O(n^2) ya que el algoritmo compara todos los elementos anteriores

### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usos en el programa.
#### Lista de Empleados O(n)

**Inserción (push_back):**
- Mejor caso: O(1)
- Caso promedio: O(1)
- Peor caso: O(1)
- La funcion de insercion tiene un nivel de complejidad de O(n) ya que los nuevos empleados se meten al inicio de la lista

**Búsqueda:**
- Mejor caso: O(1)
- Caso promedio: O(n)
- Peor caso: O(n)
- Esta funcion triene un nivel de complejidad de O(n) por que para accesar un empleado especifico se ocupa recorrer toda la lista

**Eliminación:**
- Mejor caso: O(1)
- Caso promedio: O(n)
- Peor caso: O(n)
- Para borrar un empleado se tiene que recorrer toda la lista a su posicion, entonces es nivel de complejidad de O((n) Ordenamiento de Empleados

### Operaciones de Archivo

- Lectura/Escritura: O(n) donde n es el número de empleados

### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.
Métodos de Estructura de Datos:
- agregarEmpleado(): O(n) - Verifica duplicados
- ordenarAntiguedad(): O(n²) - Implementación de inserción
- mostrarEmpleados(): O(n)
- buscarPorId(): O(n) - Búsqueda lineal
- buscarPorRangoSalario(): O(n)
- generarEstadisticas(): O(n)

Métodos de Archivos:
- cargarEmpleadosDesdeArchivo(): O(n)
- guardarEmpleadosEnArchivo(): O(n)


Complejidad Temporal Global: O(n²)
- Dominada por el método de ordenamiento
- Complejidad cuadrática por la función ordenarAntiguedad()

## Toma de Desiciones (SICT0302)

### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
las características de insertion sort lo posicionan como una solución óptima para conjuntos de datos de tamaño pequeño a mediano, especialmente en escenarios empresariales reales donde la cantidad de empleados generalmente no alcanza volúmenes masivos
Se implementó Insertion Sort por:
- Eficiencia en conjuntos de datos pequeños (<1000 elementos)
- Rendimiento óptimo en datos parcialmente ordenados
- Implementación simple y mantenible
- Estabilidad en el ordenamiento

### Selecciona una estructura de datos adecuada al problema y la usa correctamente.
Se eligió una lista enlazada (std::list) por las siguientes razones:
- Inserción eficiente (O(1)) para nuevos empleados
- Buen rendimiento en operaciones secuenciales
- Manejo eficiente de memoria para datos dinámicos
- Facilidad de implementación para ordenamiento
- Ideal para escenarios empresariales donde la plantilla de empleados experimenta cambios frecuentes.

## Implementa acciones científicas (SICT0303)

### Implementa mecanismos para consultar información de las estructras correctos.
Dentro del proyecto se implementaron varios mecanismos de consulta de informacion. Entre las formas de aceder la informacion esta: 
- Búsqueda por ID
- Búsqueda por Rango de Salario
- Generación de Estadísticas
Caracteristicas: 
- Iteración directa sobre la lista de empleados
- Uso de referencias constantes para eficiencia
- Manejo de casos sin resultados

### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta.
En el método cargarEmpleadosDesdeArchivo(), el proyecto implementa la lectura de archivos de la siguiente manera: 
- Validación de apertura del archivo
- Limpieza previa del vector de empleados
- Lectura línea por línea usando std::getline() y std::istringstream
- Maneja errores si no se pueden leer todos los datos
- Utiliza método agregarEmpleado() para validar duplicados
- Cierra el archivo automáticamente

### Implementa mecanismos de escritura de archivos para guardar los datos de las estructuras de manera correcta
Dentro del proyecto, se implementa el mecanismo de escritura de archivos entre las lineas 72 y 83. 
Caracteristicas: 
- Uso de std::ofstream para escritura
- Validación de apertura del archivo
- Escritura secuencial de todos los atributos del empleado
- Manejo de cierre de archivo
- Mensaje de confirmación de guardado

## Compilar y ejecutar
### Compilar:
g++ -std=c++11 main.cpp SistemaNegocios.cpp Empleado.cpp -o gestionEmpleados

### Ejecutar:
./gestionEmpleados
