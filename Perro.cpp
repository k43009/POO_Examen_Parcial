#include "Perro.h"

Perro::Perro()
{
    nombre = "perro";
    numeroDePatas = 4;
    numeroDeOjos = 2;

    ImprimirNombre();
}

void Perro::Ladrar()
{
    cout << "guau" << endl;
}

void Perro::HacerRuido()
{
    Ladrar();
}

void Perro::FuncionEnClasePadrePeroQueNoEsVirtual()
{
    cout << "Soy de la clase animal, No hice override porque no se puede, y soy un Perro" << endl;
}
