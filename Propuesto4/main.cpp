#include <iostream>
#include "pila.h"

int main() {
    Pila<int> pilaEnteros; 
    Pila<char> pilaCaracteres; 

    // Inserciones en la pila de enteros
    pilaEnteros.push(1);
    pilaEnteros.push(2);
    pilaEnteros.push(3);
    
    std::cout << "Elemento superior de la pila de enteros: " << pilaEnteros.top() << std::endl; // Debe imprimir 3
    pilaEnteros.pop(); 
    std::cout << "Elemento superior tras pop: " << pilaEnteros.top() << std::endl; // Debe imprimir 2

    // Inserciones en la pila de caracteres
    pilaCaracteres.push('a');
    pilaCaracteres.push('b');
    pilaCaracteres.push('c');
    
    std::cout << "Elemento superior de la pila de caracteres: " << pilaCaracteres.top() << std::endl; // Debe imprimir 'c'
    pilaCaracteres.pop(); // Elimina 'c'
    std::cout << "Elemento superior tras pop: " << pilaCaracteres.top() << std::endl; // Debe imprimir 'b'

    return 0;
}