#include <iostream>
#include <vector>
#include <stdexcept>

template <class T>
class Pila {
private:
    std::vector<T> elementos; 
public:
    void push(T elemento); 
    void pop(); 
    T top(); 
    bool empty(); 
    size_t size(); 
};

template <class T>
void Pila<T>::push(T elemento) {
    elementos.push_back(elemento); 
}
template <class T>
void Pila<T>::pop() {
    if (empty()) {
        throw std::runtime_error("Error: La pila está vacía. No se puede hacer pop.");
    }
    elementos.pop_back(); 
}

template <class T>
T Pila<T>::top() {
    if (empty()) {
        throw std::runtime_error("Error: La pila está vacía. No se puede acceder al elemento superior.");
    }
    return elementos.back();
}

template <class T>
bool Pila<T>::empty() {
    return elementos.empty();
}
template <class T>
size_t Pila<T>::size() {
    return elementos.size(); 
}


