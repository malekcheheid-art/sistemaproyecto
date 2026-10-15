# Modelado de datos con estructuras (struct) y punteros

**Materia:** Laboratorio de Programación (LPR)
**Actividad:** 5 - Modelado de datos con estructuras (struct) y punteros
**Curso:** 5° año, 3° grupo A
**Ciclo:** 1° cuatrimestre 2026
**Establecimiento:** EEST N.º 1 "Eduardo Ader" - Vicente López

**Docente:** Yamil Ganduglia
**Alumno:** Malek Cheheid
**Grupo:** A
**Modalidad:** Individual

---

## Descripción

Esta actividad consiste en modelar una entidad del mundo real mediante una
estructura de datos (`struct`) en C++, controlando el ingreso y la modificación
de sus miembros por referencia a través de punteros y del operador flecha (`->`).

El objetivo práctico es mostrar que agrupar datos relacionados en una única
estructura contigua de memoria RAM facilita su manipulación, evita la duplicación
de variables sueltas y permite pasarlas por dirección a funciones sin generar
copias pesadas.

El ejercicio usa una estructura `EntidadProyecto` que representa un componente
lógico del proyecto integrador anual: un identificador numérico, un nombre o
descripción y una métrica de operación (por ejemplo, lecturas de sensores,
consumo o avance).

### Estructura de datos

```cpp
struct EntidadProyecto {
    int    id;
    char   nombre[50];
    float  metrica;
};
```

### Conceptos trabajados

- **Struct:** colección de variables de distintos tipos agrupadas bajo una misma
  entidad lógica, en bloques contiguos de memoria.
- **Operador flecha (`->`):** sintaxis exclusiva de C++ para acceder a los campos
  de una estructura a través de un puntero desreferenciado.
- **Pasaje por referencia:** envío de la dirección de memoria (`&`) de un objeto a
  una función para modificar el original sin crear duplicados en la RAM.
- **Buffer de entrada y `cin.ignore()`:** limpieza del carácter `Enter` (`\n`)
  remanente antes de una lectura con `cin.getline`, para que la cadena no se
  omita automáticamente.

---

## Estructura del repositorio

```
sistemaproyecto/
|
|-- .gitignore                    Reglas de exclusión (.exe, .vscode/)
|-- LICENSE                       Licencia MIT escolar
|-- README.md                     Portada con integrantes y descripción del modelo
|-- docs/
|   |-- InformeEEST1_LPR2026_ACT05_G03_v1.0.0.pdf    Informe en formato APA v7
|   `-- manuales/
|       |-- manual_programador_v1.0.0.pdf
|       `-- manual_programador_v1.0.0.md
|-- src/
|   `-- main.cpp                  Programa principal modular
`-- capturas/
    `-- ejecucion_struct.png      Evidencias de ejecución
```

---

## Compilación y ejecución

El proyecto usa el compilador `g++` (MSYS2) desde Visual Studio Code.

Compilar:

```bash
g++ src/main.cpp -o src/sistemaproyecto.exe
```

Ejecutar en Windows:

```bash
.\src\sistemaproyecto.exe
```

Si el equipo del laboratorio no permite compilar por falta de permisos, el
código puede ejecutarse en el compilador en línea OnlineGDB, generando las
capturas de pantalla desde ahí.

---

## Entrega

- **Informe APA v7:** `EEST1_LPR2026_ACT05_[ApellidoNombre_Grupo]_Informe_v1.0.0.pdf`,
  subido a la plataforma Moodle.
- **Repositorio:** debe incluir la estructura completa de carpetas y el historial
  de desarrollo con las ramas `main` y `development`.

---

## Licencia

MIT. Ver el archivo [LICENSE](LICENSE).