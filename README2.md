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

## Desarrollo de Competencias

## Evalúa los componentes (SICT0301)
### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.

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

### Algoritmo de Ordenamiento (Insertion Sort)
- Mejor caso: O(n) - Lista ya ordenada
- Caso promedio: O(n²)
- Peor caso: O(n²) - Lista ordenada inversamente
- En el peor caso, insertion sort tendria un nivel de complejidad de O(n^2) ya que el algoritmo compara todos los elementos anteriores

### Operaciones de Archivo

- Lectura/Escritura: O(n) donde n es el número de empleados

## Justificación de Decisiones (SICT0302)

### Estructura de Datos Seleccionada
Se eligió una lista enlazada (std::list) por las siguientes razones:
- Inserción eficiente (O(1)) para nuevos empleados
- Buen rendimiento en operaciones secuenciales
- Manejo eficiente de memoria para datos dinámicos
- Facilidad de implementación para ordenamiento

### Algoritmo de Ordenamiento
Se implementó Insertion Sort por:
- Eficiencia en conjuntos de datos pequeños (<1000 elementos)
- Rendimiento óptimo en datos parcialmente ordenados
- Implementación simple y mantenible
- Estabilidad en el ordenamiento

## Casos de Prueba (SICT0303)

```cpp
// Caso de prueba 1: Inserción de empleados
sistema.agregarEmpleado(1, "Juan", 5, 50000);
sistema.agregarEmpleado(2, "Ana", 3, 45000);
sistema.agregarEmpleado(3, "Pedro", 7, 55000);

// Caso de prueba 2: Ordenamiento
sistema.ordenarAntiguedad();
// Resultado esperado: Pedro(7) -> Juan(5) -> Ana(3)

// Caso de prueba 3: Búsqueda por rango salarial
sistema.buscarPorRangoSalario(45000, 52000);
// Resultado esperado: Juan, Ana

// Caso de prueba 4: Estadísticas
sistema.generarEstadisticas();
// Verifica cálculos de promedios y totales
