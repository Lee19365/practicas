#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Clase Foca
class Foca {
private:
    string nombre;
    int edad;

public:
    Foca(string _nombre, int _edad) : nombre(_nombre), edad(_edad) {}

    string getNombre() const {
        return nombre;
    }

    int getEdad() const {
        return edad;
    }

    void mostrar() const {
        cout << nombre << " tiene " << edad << " años." << endl;
    }

    bool esMayorDe10() const {
        return edad > 10;
    }
};

// Función para calcular el promedio
double calcularPromedioEdad(const vector<Foca>& focas) {
    int suma = 0;
    for (const Foca& f : focas) {
        suma += f.getEdad();
    }
    return static_cast<double>(suma) / focas.size();
}

int main() {
    vector<Foca> focas;
    int n;

    cout << "¿Cuántas focas quieres registrar? ";
    cin >> n;

    // Registrar focas
    for (int i = 0; i < n; i++) {
        string nombre;
        int edad;

        cout << "Nombre de la foca #" << (i + 1) << ": ";
        cin >> nombre;
        cout << "Edad de " << nombre << ": ";
        cin >> edad;

        focas.emplace_back(nombre, edad);
    }

    cout << "\n=== Información de Focas ===" << endl;
    for (const Foca& f : focas) {
        f.mostrar();
    }

    double promedio = calcularPromedioEdad(focas);
    cout << "\nEdad promedio: " << promedio << " años" << endl;

    // Verificar si alguna es mayor de 10 años
    bool hayMayores = false;
    for (const Foca& f : focas) {
        if (f.esMayorDe10()) {
            hayMayores = true;
            break;
        }
    }

    if (hayMayores) {
        cout << "¡Hay focas mayores de 10 años!" << endl;
    } else {
        cout << "Todas las focas tienen 10 años o menos." << endl;
    }

    return 0;
}
