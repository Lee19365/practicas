#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo* siguiente;
};

int main(){
    Nodo* nodo1 = new Nodo{3,nullptr};
    Nodo* nodo2 = new Nodo{5,nullptr};
    Nodo* nodo3 = new Nodo{7,nullptr};
    Nodo* nodo4 = new Nodo{2,nullptr};

    nodo1 -> siguiente = nodo2;
    nodo2 -> siguiente = nodo3;
    nodo3 -> siguiente = nodo4;
    nodo4 -> siguiente = nodo1;

    Nodo* actual = nodo1;
    do{
        cout << actual ->dato << " ";
        actual = actual -> siguiente;
    }while(actual != nodo1);

    delete nodo1;
    delete nodo2;
    delete nodo3;
    delete nodo4;
    return 0;
}