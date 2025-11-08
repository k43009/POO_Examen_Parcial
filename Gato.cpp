#include "Gato.h"

Gato::Gato()
{
    numeroDeOjos = 2;
    numeroDePatas = 4;
    nombre = "Gato";

    ImprimirNombre();
}


void Gato::Maullar()
{
    cout << "Meow" << endl;
}

void Gato::HacerRuido()
{
    Maullar();
}

void Gato::FuncionEnClasePadrePeroQueNoEsVirtual()
{
    cout << "Soy de la clase animal, No hice override porque no se puede, y soy un Gato" << endl;
}
