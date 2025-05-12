#include <iostream>

class Animal {
public:
    // Atributo de la clase base
    std::string nombre;

    // Constructor
    Animal(std::string nombre) : nombre(nombre) {}

    // Método de la clase base
    void dormir() {
        std::cout << nombre << " está durmiendo." << std::endl;
    }

    // Método virtual (para poder ser sobrescrito en la clase hija)
    virtual void hablar() {
        std::cout << nombre << " hace un sonido." << std::endl;
    }
};
class Foca : public Animal { // `public` significa que los miembros públicos de Animal siguen siendo públicos en Foca.
public:
    // Constructor de la clase hija
    Foca(std::string nombre) : Animal(nombre) {}

    // Sobrescribir el método hablar de la clase base
    void hablar() override {
        std::cout << nombre << " hace un sonido de foca: ¡Ahh!" << std::endl;
    }

    // Método único de Foca
    void nadar() {
        std::cout << nombre << " está nadando." << std::endl;
    }
};
int main() {
    // Crear una foca
    Foca foca1("Mochi");

    // Usar métodos heredados de la clase base
    foca1.dormir();

    // Usar método sobrescrito de la clase hija
    foca1.hablar();

    // Usar método único de la clase hija
    foca1.nadar();

    return 0;
}
