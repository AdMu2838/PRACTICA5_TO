#include <iostream>
#include <string>
#include "ListaEnlazada.h"
using namespace std;

int main() {
    // Lista de edades
    ListaEnlazada<int> listaEdades;
    listaEdades.agregarAlFinal(25);
    listaEdades.agregarAlFinal(30);
    listaEdades.agregarAlFinal(45);
    cout << "Lista de Edades: ";
    listaEdades.mostrar();

    // Lista de palabras
    ListaEnlazada<string> listaPalabras;
    listaPalabras.agregarAlFinal("Hola");
    listaPalabras.agregarAlFinal("Mundo");
    listaPalabras.agregarAlFinal("C++");
    cout << "Lista de Palabras: ";
    listaPalabras.mostrar();

    return 0;
}