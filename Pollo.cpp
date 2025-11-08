#include "Pollo.h"


Pollo::Pollo()
{
	numeroDeOjos = 2;
	numeroDePatas = 2;
	nombre = "Pollo";
}

void Pollo::Piar()
{
	cout << "Pio" << endl;
}

void Pollo::HacerRuido()
{
	Piar();
}

void Pollo::FuncionEnClasePadrePeroQueNoEsVirtual()
{
	cout << "Soy de la clase animal, No hice override porque no se puede, y soy un Pollo" << endl;
}
