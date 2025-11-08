#pragma once

#include<iostream>
using namespace std;

class Interna1
{
public:
	~Interna1();
};

class Interna2
{
public:
	~Interna2();
};


class Triangle
{
public:
	// constructor.
	// Sin tipo de retorno, su nombre es exactamente el mismo que el de la clase o struct a que pertenece
	// puede recibir parámetros o no. Si no los recibe, se le conoce como el constructor por defecto.
	Triangle(); // este no recibe parámetros, entonces es un constructor por defecto.


	/*
	No puedes tener dos constructores que reciban los mismo parámetros.
	Triangle()
	{
		cout << "también soy el constructor por defecto" << endl;
	}*/

	// sí puedes tener varios constructores que reciban distintos parámetros. Como si fuera una sobrecarga de función.
	Triangle(float altura, float base);

	// ¿Qué pasa si no tienes un constructor por defecto? D: 
	// Si no hay constructor por defecto PERO sí hay otro u otros constructores, entonces tú no puedes
	// instanciar objetos de esa clase sin un constructor específico.
	// Pero si no pones el constructor por defecto NI TAMPOCO hay otros constructores, entonces hay un 
	// constructor por defecto "automático", que no hace nada, excepto generar el objeto.
	// SÍ va a haber veces en que no querramos que haya un constructor por defecto.


	// NO puede recibir parámetros
	// NO devuelve ningún tipo de dato.
	// Solo sirve para "limpiar" o liberar recursos que se necesiten liberar.
	~Triangle();

	// como no puede recibir parámetros, no puede haber "sobrecargas" y por lo tanto solo puede existir un destructor
	// para cada clase y estructura. No más.
	/*~Triangle()
	{

	}*/




	void ImprimirTriangulo()
	{
		cout << "Imprimiendo triángulo: base: " << base << " altura: " << altura << endl;
	}

	Interna1 myInterna1; // y segundo el destructor de este.
	Interna2 myInterna2; // primero se manda a llamar el destructor de este

	float altura;
	float base;
	int* vertices;


	// Friend function overloading (commonly used for stream operators << and >>)
	friend std::ostream& operator<<(std::ostream& os, const Triangle& obj);
};

// operador es muy parecido a una función, pero usa la palabra clave operator
// Tipo de dato que regresa el operador (o que sale como resultado del operador) + operator + símbolo del operador + parámetros
ostream& operator<<(ostream& os, const Triangle& obj);

// Muy rara vez van a usar una función para construir un objeto en vez de un constructor. 
// Pero en algunos patrones de diseño sí se usa. Los veremos más adelante.
Triangle GenerarTriangulo(float altura, float base);