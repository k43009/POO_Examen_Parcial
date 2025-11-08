#include "Animal.h"

Animal::~Animal()
{
	cout << "Soy el destructor virtual de Animal." << endl;
}

void Animal::ImprimirNombre()
{
	cout << "Mi nombre de especie es: " << nombre << endl;
}

// Si tú no le pones virtual a la función de la clase padre Y en la clase hija tienes una función que se llama igual
// entonces si tú la mandas a llamar a través de un puntero de la clase padre, se manda a llamar la función de la clase padre
// pero si fue a través de un puntero de la clase hija, se manda a llamar la de la clase hija.
void Animal::FuncionEnClasePadrePeroQueNoEsVirtual()
{
	cout << "Soy de la clase animal" << endl;
}
// Nunca poner una función en la clase padre que NO es virtual, pero que alguna clase hija tenga una función que 
// se llame igual.

//void Animal::HacerRuido()
//{
//	cout << "Soy un animal base" << endl;
//}
