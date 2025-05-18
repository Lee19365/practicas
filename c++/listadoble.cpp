#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo* anterior;
    Nodo* siguiente;
};

int main(){

    Nodo* nodo1 = new Nodo();
    Nodo* nodo2 = new Nodo();
    Nodo* nodo3 = new Nodo();

    nodo1 -> dato = 1;
    nodo1 -> siguiente = nodo2;
    nodo1 ->anterior = nullptr;

    nodo2 -> dato =2;
    nodo2 -> siguiente = nodo3;
    nodo2 -> anterior =nodo1;

    nodo3 -> dato = 3;
    nodo3 -> siguiente = nullptr;
    nodo3 -> anterior = nodo2;

    cout << "El primer nodo tiene el valor: " << nodo1 -> dato << endl;
    cout << "El segundo nodo tiene el valor: " << nodo2 -> dato << endl;
    cout << "El tercer nodo tiene el valor: " << nodo3 -> dato << endl;

    delete nodo1;
    delete nodo2;
    delete nodo3;
    return 0;
    
}