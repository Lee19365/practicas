#include <iostream>
using namespace std;

float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float multiplicacion(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    if (b == 0) {
        cout << "No se puede dividir entre cero" << endl;
        return 0; // o lanzar una excepción
    }
    return a / b;
}

int main() {
    float a, b;
    char operacion;  // Cambiar a char para leer operadores como '+', '-', '*', '/'
    

    // Entrada de los números
    cout << "Escribe el primer número: ";
    cin >> a;
    
    cout << "Escribe el segundo número: ";
    cin >> b;

    // Entrada de la operación
    cout << "¿Qué operación quieres hacer? (+, -, *, /): ";
    cin >> operacion;

    // Realizar la operación según el operador
    switch (operacion) {
        case '+':
            cout << "La suma es: " << suma(a, b) << endl;
            break;
        case '-':
            cout << "La resta es: " << resta(a, b) << endl;
            break;
        case '*':
            cout << "La multiplicación es: " << multiplicacion(a, b) << endl;
            break;
        case '/':
            cout << "La división es: " << division(a, b) << endl;
            break;
        default:
            cout << "Operación no válida" << endl;
    }

    return 0;
}
