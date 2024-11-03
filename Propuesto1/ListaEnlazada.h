#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Nodo {
public:
    T dato;
    Nodo* siguiente;

    Nodo(T valor) : dato(valor), siguiente(nullptr) {}
};

template<typename T>
class ListaEnlazada {
public:
    ListaEnlazada() : cabeza(nullptr) {}

    ~ListaEnlazada();

    void agregarAlFinal(T valor);
    void eliminar(T valor);
    void mostrar() const;

private:
    Nodo<T>* cabeza;
};

template<typename T>
ListaEnlazada<T>::~ListaEnlazada() {
    Nodo<T>* actual = cabeza;
    while (actual != nullptr) {
        Nodo<T>* siguiente = actual->siguiente;
        delete actual;
        actual = siguiente;
    }
}

template<typename T>
void ListaEnlazada<T>::agregarAlFinal(T valor) {
    Nodo<T>* nuevoNodo = new Nodo<T>(valor);
    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
    } else {
        Nodo<T>* actual = cabeza;
        while (actual->siguiente != nullptr) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevoNodo;
    }
}

template<typename T>
void ListaEnlazada<T>::eliminar(T valor) {
    if (cabeza == nullptr) return;

    if (cabeza->dato == valor) {
        Nodo<T>* nodoAEliminar = cabeza;
        cabeza = cabeza->siguiente;
        delete nodoAEliminar;
        return;
    }

    Nodo<T>* actual = cabeza;
    while (actual->siguiente != nullptr && actual->siguiente->dato != valor) {
        actual = actual->siguiente;
    }

    if (actual->siguiente != nullptr) {
        Nodo<T>* nodoAEliminar = actual->siguiente;
        actual->siguiente = actual->siguiente->siguiente;
        delete nodoAEliminar;
    }
}

template<typename T>
void ListaEnlazada<T>::mostrar() const {
    Nodo<T>* actual = cabeza;
    while (actual != nullptr) {
        cout << actual->dato << " ";
        actual = actual->siguiente;
    }
    cout << endl;
}


