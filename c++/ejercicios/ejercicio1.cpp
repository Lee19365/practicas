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

void imprimirLista(nodo* cabeza) {
    nodo* actual = cabeza;
    while (actual != nullptr) {
        cout << actual->dato << " ";
        actual = actual->siguiente;
    }
    cout << endl;
}

void colapsarLista(nodo*& cabeza) {
    bool colapsado;
    do {
        colapsado = false;
        nodo* actual = cabeza;
        nodo* anterior = nullptr;
        
        while (actual != nullptr && actual->siguiente != nullptr) {
            if (actual->dato == actual->siguiente->dato) {
                // Colapsar nodos adyacentes
                int suma = actual->dato + actual->siguiente->dato;
                actual->dato = suma;
                
                nodo* eliminar = actual->siguiente;
                actual->siguiente = eliminar->siguiente;
                delete eliminar;
                
                colapsado = true;
                break; // Solo colapsar un par a la vez
            }
            anterior = actual;
            actual = actual->siguiente;
        }
        
        if (colapsado) {
            cout << "Después de colapsar: ";
            imprimirLista(cabeza);
        }
    } while (colapsado);
}

int main() {
    nodo* cabeza = nullptr;
    nodo* ultimo = nullptr;

    // Ingresar los números iniciales
    for (int i = 0; i < 3; i++) {
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

    cout << "Lista inicial: ";
    imprimirLista(cabeza);

    // Agregar nuevo número al inicio o final
    char opcion;
    int numeroColapso;
    cout << "¿Agregar al inicio (i) o al final (f)? ";
    cin >> opcion;
    cout << "Ingrese el número a agregar: ";
    cin >> numeroColapso;

    nodo* nuevo = new nodo;
    nuevo->dato = numeroColapso;

    if (opcion == 'i') {
        nuevo->siguiente = cabeza;
        cabeza = nuevo;
    } else {
        nuevo->siguiente = nullptr;
        if (cabeza == nullptr) {
            cabeza = nuevo;
        } else {
            ultimo->siguiente = nuevo;
        }
    }

    cout << "Lista después de agregar: ";
    imprimirLista(cabeza);

    // Colapsar pares adyacentes
    colapsarLista(cabeza);

    cout << "Lista final: ";
    imprimirLista(cabeza);

    // Liberar memoria
    nodo* actual = cabeza;
    while (actual != nullptr) {
        nodo* temp = actual;
        actual = actual->siguiente;
        delete temp;
    }

    return 0;
}