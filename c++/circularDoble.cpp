#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo* siguiente;
    Nodo* anterior;
};

int main(){
    Nodo* nodo1 = new Nodo{2,nullptr,nullptr};
    
    Nodo* nodo2 = new Nodo{3,nullptr,nullptr};
    Nodo* nodo3 = new Nodo{4,nullptr,nullptr};

    nodo1 -> siguiente = nodo2;
    nodo1 -> anterior = nodo3;

    nodo2 ->siguiente =nodo3;
    nodo2 -> anterior = nodo1;

    nodo3 -> siguiente = nodo1;
    nodo3 -> anterior = nodo2;

    cout<<"hacia adelante"<<endl;

    Nodo* actual = nodo1;
    do{
        cout<< actual -> dato << " ";
        actual = actual -> siguiente;
    }while(actual != nodo1);

    cout<<"hacia atras"<<endl;
    actual = actual -> anterior;
    do{
        cout<< actual -> dato << " ";
        actual = actual -> anterior;}while(actual != nodo1->anterior);

    delete nodo1;
    delete nodo2;
    delete nodo3;
    return 0;
}