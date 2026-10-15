/*
===================================================================
Materia: Laboratorio de Programacion (LPR) - 5to ano
Establecimiento: EEST N.o 1 "Eduardo Ader" - Vicente Lopez
Alumno: MALEK TOMAS CHEHEID TUBELLO - Grupo A

Archivo: src/main.cpp

Actividad 5: Modelado de datos con estructuras (struct) y punteros.
Muestra el pasaje por referencia mediante punteros y el uso del
operador flecha (->) para modificar los miembros de una estructura.
===================================================================
*/

#include <iostream>
#include <cstring>

using namespace std;

/*
1. DEFINICION DE LA ESTRUCTURA
Agrupa en un unico bloque contiguo de memoria los datos de una
entidad del proyecto integrador anual.
*/
struct EntidadProyecto {
    int   id;          // Identificador numerico del componente
    char  nombre[50];  // Nombre o descripcion del componente
    float metrica;     // Lecturas de sensores, consumo, avance, etc.
};

/* 2. PROTOTIPO
   Recibe la direccion de memoria de la estructura (puntero). */
void cargarDatos(EntidadProyecto* ptr);

/* Muestra los datos leyendo la estructura con notacion de punto. */
void mostrarDatos(const EntidadProyecto* ptr);

int main() {

    /* Inicializacion de seguridad en la memoria Stack */
    EntidadProyecto miEntidad = {0, "Vacio - Malek Cheheid", 0.0f};

    cout << "=====================================================" << endl;
    cout << "   MODELADO STRUCT - ESTUDIANTE: Malek Cheheid      " << endl;
    cout << "=====================================================" << endl;

    /* 3. INVOCACION
       Se envia la direccion fisica de memoria con '&', de modo que
       la funcion modifique el original y no una copia. */
    cargarDatos(&miEntidad);

    cout << "\n=== DATOS VERIFICADOS EN LA MEMORIA RAM ===" << endl;

    mostrarDatos(&miEntidad);

    cout << "=====================================================" << endl;

    return 0;  // Codigo 0: finalizacion exitosa
}

/*
4. Ingreso de datos por referencia.
   El puntero 'ptr' accede a los campos con el operador flecha (->),
   equivalente a desreferenciar el puntero y luego usar el punto.
*/
void cargarDatos(EntidadProyecto* ptr) {

    cout << "\n--- INGRESO DE DATOS MEDIANTE OPERADOR FLECHA ---" << endl;

    cout << "=> Ingrese el ID de la entidad (entero): ";
    cin >> ptr->id;

    /* Limpieza del buffer obligatoria antes de cin.getline,
       para eliminar el Enter remanente. */
    cin.ignore();

    cout << "=> Ingrese el Nombre o Descripcion: ";
    cin.getline(ptr->nombre, 50);

    cout << "=> Ingrese la Metrica de Operacion (decimal/float): ";
    cin >> ptr->metrica;

}

/* 5. Verificacion: los datos leidos confirman la modificacion
      del objeto original, no de una copia. */
void mostrarDatos(const EntidadProyecto* ptr) {

    cout << "ID Registrado:            " << ptr->id << endl;
    cout << "Nombre Registrado:        " << ptr->nombre << endl;
    cout << "Metrica Guardada:         " << ptr->metrica << endl;

    /* Con el punto se accede a la estructura en memoria. */
    cout << "Direccion RAM Hexadecimal: " << &(*ptr) << endl;

}