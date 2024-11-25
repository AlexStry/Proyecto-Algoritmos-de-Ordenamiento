# Sistema de Gestión de Empleados

## Descripción del Proyecto
Este proyecto implementa un sistema de gestión de empleados que permite registrar, organizar y analizar información de empleados de una empresa. El sistema incluye funcionalidades para ordenamiento, búsqueda y análisis de datos.

## Componentes Principales
- **Almacenamiento de empleados en estructura de datos**
- **Sistema de ordenamiento por antigüedad**
- **Gestión de archivos para persistencia de datos**
- **Análisis estadístico de datos de empleados**
- **Búsqueda y filtrado de empleados**

## Análisis de Complejidad (SICT0301)

### Estructuras de Datos

#### Lista de Empleados (std::list)

**Inserción (push_back):**
- Mejor caso: O(1)
- Caso promedio: O(1)
- Peor caso: O(1)

**Búsqueda:**
- Mejor caso: O(1)
- Caso promedio: O(n)
- Peor caso: O(n)

**Eliminación:**
- Mejor caso: O(1)
- Caso promedio: O(n)
- Peor caso: O(n)

### Algoritmo de Ordenamiento (Insertion Sort)

- Mejor caso: O(n) - Lista ya ordenada
- Caso promedio: O(n²)
- Peor caso: O(n²) - Lista ordenada inversamente

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
