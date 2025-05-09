#include <iostream>
using namespace std;

float cuadrado() {
    float lado;
    cout << "¿Cuál es el lado? ";
    cin >> lado;
    return lado * lado;
}

float rectangulo() {
    float base, altura;
    cout << "¿Cuál es la base? ";
    cin >> base;
    cout << "¿Cuál es la altura? ";
    cin >> altura;
    return base * altura;
}

float triangulo() {
    float base, altura;
    cout << "¿Cuál es la base? ";
    cin >> base;
    cout << "¿Cuál es la altura? ";
    cin >> altura;
    return (base * altura) / 2;
}

float circulo() {
    float radio;
    cout << "¿Cuál es el radio? ";
    cin >> radio;
    return 3.1416 * radio * radio;
}

int main() {
    int figura;
    float area;

    cout << "¿Qué figura quieres calcular?" << endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Rectángulo" << endl;
    cout << "3. Triángulo" << endl;
    cout << "4. Círculo" << endl;
    cout << "Ingresa el número correspondiente: ";
    cin >> figura;

    switch (figura) {
        case 1:
            area = cuadrado();
            cout << "El área del cuadrado es: " << area << endl;
            break;
        case 2:
            area = rectangulo();
            cout << "El área del rectángulo es: " << area << endl;
            break;
        case 3:
            area = triangulo();
            cout << "El área del triángulo es: " << area << endl;
            break;
        case 4:
            area = circulo();
            cout << "El área del círculo es: " << area << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
    }

    return 0;
}
