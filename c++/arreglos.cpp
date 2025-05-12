#include <iostream>
using namespace std;

int main() {
    const int NUM_FOCAS = 5;
    int edades[NUM_FOCAS];
    int suma = 0;
    bool hayMayorDeDiez = false;

    // Entrada de datos
    for (int i = 0; i < NUM_FOCAS; i++) {
        cout << "Ingrese la edad de la foca #" << (i + 1) << ": ";
        cin >> edades[i];
        suma += edades[i];

        if (edades[i] > 10) {
            hayMayorDeDiez = true;
        }
    }

    // Mostrar las edades
    cout << "\nEdades registradas:\n";
    for (int i = 0; i < NUM_FOCAS; i++) {
        cout << "Foca #" << (i + 1) << ": " << edades[i] << " años\n";
    }

    // Calcular promedio
    double promedio = static_cast<double>(suma) / NUM_FOCAS;
    cout << "\nEdad promedio: " << promedio << " años" << endl;

    // Verificar si hay alguna foca vieja
    if (hayMayorDeDiez) {
        cout << "¡Hay al menos una foca mayor de 10 años!" << endl;
    } else {
        cout << "Todas las focas tienen 10 años o menos." << endl;
    }

    return 0;
}
