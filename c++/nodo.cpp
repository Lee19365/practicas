#include <iostream>
using namespace std;

// Definición del nodo
struct Nodo{
    int dato;
    Nodo* siguiente;
};

int main() {
    // Crear nodos
    Nodo* nodo1 = new Nodo();
    Nodo* nodo2 = new Nodo();

    nodo1-> dato = 1;
    nodo1 -> siguiente = nodo2;
    nodo2 -> dato = 2;
    nodo2 -> siguiente = nullptr;
    
    cout << "El primer nodo tiene el valor: " << nodo1 -> dato << endl;
    cout << "El segundo nodo tiene el valor: " << nodo2 -> dato << endl;

    delete nodo1;
    delete nodo2;
    return 0;
}
