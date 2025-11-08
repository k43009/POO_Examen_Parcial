#pragma once

#include<iostream>
using namespace std;

// La clase Animal es abstracta porque tiene al menos una función virtual pura (hacerRuido)
class Animal
{
public:
	~Animal();

	int numeroDeOjos;
	int numeroDePatas;
	string nombre;

	// Una función que NO lleva virtual es porque no la debe de modificar nadie más en la herencia.
	void ImprimirNombre();

	// Cuando una función es "virtual" quiere decir que está hecha para que las clases hijas las puedan 
	// modificar o extender.
	// virtual void HacerRuido();

	// versión virtual pura:
	// Ya NO puedo darle cuerpo a la función.
	// Si una clase tiene una función virtual pura, tú NO puedes instanciar un objeto de dicha clase.
	// Puedes tener punteros de dicha clase, pero no instancias.
	virtual void HacerRuido() = 0;

	// Si tú no le pones virtual a la función de la clase padre Y en la clase hija tienes una función que se llama igual
	// entonces si tú la mandas a llamar a través de un puntero de la clase padre, se manda a llamar la función de la clase padre
	// pero si fue a través de un puntero de la clase hija, se manda a llamar la de la clase hija.
	void FuncionEnClasePadrePeroQueNoEsVirtual();
	// Nunca poner una función en la clase padre que NO es virtual, pero que alguna clase hija tenga una función que 
	// se llame igual.
};

