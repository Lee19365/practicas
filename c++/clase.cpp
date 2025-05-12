#include <iostream>
using namespace std;

// Definición de la clase
class Foca {
private:
    string nombre;
    int edad;

public:
    // Constructor
    Foca(string n, int e) {
        nombre = n;
        edad = e;
    }

    // Método para que la foca haga un sonido
    void hacerSonido() {
        cout << nombre << " dice: ¡Ork ork!" << endl;
    }

    // Método para mostrar la edad
    void mostrarEdad() {
        cout << nombre << " tiene " << edad << " años." << endl;
    }

    // Método extra: nadar
    void nadar() {
        cout << nombre << " está nadando felizmente en el mar." << endl;
    }
};

int main() {
    // Crear un objeto de tipo Foca
    Foca miFoca("Mochi", 2);

    // Usar los métodos del objeto
    miFoca.hacerSonido();
    miFoca.mostrarEdad();
    miFoca.nadar();

    return 0;
}
