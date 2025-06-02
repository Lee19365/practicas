/*
Añadir cualquier entero al extremo izquierdo o derecho del array.
Luego, siempre que haya un par de elementos adyacentes idénticos en el array, estos se reemplazarán por su suma.
Se puede demostrar que puede haber como máximo un par de estos elementos en el array simultáneamente.

Por ejemplo, si el array es [3,6,4]
y añadimos el número 3
a la izquierda, el array primero se convertirá en [3,3,6,4]
, luego los dos primeros elementos se reemplazarán por 6
, y el array se convertirá en [6,6,4]
, y luego en [12,4]
*/


#include <iostream>
using namespace std;

struct nodo {
    int dato;
    nodo* siguiente;
};

int main() {
    nodo* cabeza = nullptr;
    nodo* ultimo = nullptr;

    for (int i = 0; i < 4; i++) {
        int num;
        cout << "Ingrese un numero: ";
        cin >> num;

        nodo* nuevo = new nodo;
        nuevo->dato = num;
        nuevo->siguiente = nullptr;

        if (cabeza == nullptr) {
            cabeza = nuevo;
            ultimo = nuevo;
        } else {
            ultimo->siguiente = nuevo;
            ultimo = nuevo;
        }
    }

    // Acceder al nodo 2 (por ejemplo)
    nodo* actual = cabeza;
    int posicion = 1;

    while (actual != nullptr && posicion < 2) {
        actual = actual->siguiente;
        posicion++;
    }

    if (actual != nullptr) {
        cout << "Dato del nodo 2: " << actual->dato << endl;
    } else {
        cout << "No existe el nodo 2." << endl;
    }

    // Mostrar la lista
    cout << "Lista ingresada: ";
    actual = cabeza;
    while (actual != nullptr) {
        cout << actual->dato << " ";
        actual = actual->siguiente;
    }
    cout << endl;

    // Liberar memoria
    actual = cabeza;
    while (actual != nullptr) {
        nodo* temp = actual;
        actual = actual->siguiente;
        delete temp;
    }

    return 0;
}
