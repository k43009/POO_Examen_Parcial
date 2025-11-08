#pragma once

#include<iostream>
using namespace std;

class Vector2D
{
public:
	Vector2D(int _x, int _y);

	int x;
	int y;
	string nombre;

	// Operadores para sumar, restar, multiplicar, etc. dos vectores
	// Tipo de retorno: Vector2D
	// operator Y símbolo del operador: operator+
	// parámetros
	Vector2D operator+(const Vector2D other);

	Vector2D operator*(const Vector2D other);

	Vector2D operator*(const int multiplicador);

	// Regresa true si el que está a la izquierda del operador es más chico que el de la derecha en su X y en su Y
	bool operator<(const Vector2D other);

	// OJO: Dos operadores del mismo nombre (símbolo) y con los mismos parámetros 
	// NO pueden tener distinto tipo de retorno.
	// Vector2D operator<(const Vector2D other);

	bool operator==(const Vector2D other);


	Vector2D Sumar(const Vector2D other);

	// Friend function overloading (commonly used for stream operators << and >>)
	friend std::ostream& operator<<(std::ostream& os, const Vector2D& obj);
};

// operador es muy parecido a una función, pero usa la palabra clave operator
// Tipo de dato que regresa el operador (o que sale como resultado del operador) + operator + símbolo del operador + parámetros
ostream& operator<<(ostream& os, const Vector2D& obj);

void DemostracionSobrecargaDeOperadores();