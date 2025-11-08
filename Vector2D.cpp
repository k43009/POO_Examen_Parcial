#include "Vector2D.h"
#include <iostream>
using namespace std;


Vector2D::Vector2D(int _x, int _y)
{
	x = _x;
	y = _y;
}

Vector2D Vector2D::operator+(const Vector2D other)
{
	// Esto retorna un vector2D que es la suma en X y Y respectivamente de este vector 
	// y el recibido como parámetro.
	return Vector2D(x + other.x, y + other.y);
}

Vector2D Vector2D::operator*(const Vector2D other)
{
	return Vector2D(x * other.x, y * other.y);
}

Vector2D Vector2D::operator*(const int multiplicador)
{
	return Vector2D(x * multiplicador, y * multiplicador);
}

// Regresa true si el que está a la izquierda del operador es más chico que el de la derecha en su X y en su Y
bool Vector2D::operator<(const Vector2D other)
{
	if (x < other.x && y < other.y)
		return true;
	return false;
}

bool Vector2D::operator==(const Vector2D other)
{
	if (x == other.x && y == other.y)
		return true;
	return false;

	// Esto sería lo mismo, pero lo hago de la otra manera porque creo que queda un poquito más claro.
	// return (x < other.x && y < other.y);
}

Vector2D Vector2D::Sumar(const Vector2D other)
{
	// Esto retorna un vector2D que es la suma en X y Y respectivamente de este vector 
	// y el recibido como parámetro.
	return Vector2D(x + other.x, y + other.y);
}

ostream& operator<<(ostream& os, const Vector2D& obj)
{
	os << "Vector2D tiene valores X:" << obj.x << ", Y:" << obj.y;
	// Implementation to output obj's data to os
	return os;
}

void DemostracionSobrecargaDeOperadores()
{
	Vector2D vectorA(1, 3);
	vectorA.nombre = "vector A original";
	cout << vectorA << endl;

	Vector2D vectorB(-1, 4);
	cout << vectorB << endl;

	Vector2D vectorC(2, 2);
	cout << vectorC << endl;

	Vector2D vectorAMasB = vectorA + vectorB;
	cout << "vectorAMasB: " << vectorAMasB << endl;

	Vector2D vectorAMasBConFuncion = vectorA.Sumar(vectorB);
	cout << "vectorAMasBConFuncion: " << vectorAMasBConFuncion << endl;

	Vector2D vectorAMasBMasC = vectorA + vectorB + vectorC;
	cout << "vectorAMasBMasC: " << vectorAMasBMasC << endl;

	Vector2D vectorAMasBMasCConFuncion = vectorA.Sumar(vectorB.Sumar(vectorC));
	cout << "vectorAMasBMasCConFuncion : " << vectorAMasBMasCConFuncion << endl;


	Vector2D vectorAPorB = vectorA * vectorB;
	cout << "vector A por B: " << vectorAPorB << endl;

	Vector2D vectorAPor3 = vectorA * 3;
	cout << "vector A por 3: " << vectorAPor3 << endl;

	bool vectorAEsMenorQueVectorB = vectorA < vectorB;
	if (vectorAEsMenorQueVectorB)
	{
		cout << "El vector A es menor que el vector B tanto en X como en Y" << endl;
	}
	else 
	{
		cout << "El vector A NO es menor que el vector B tanto en X como en Y" << endl;
	}

	Vector2D vectorAOtro(1, 3);
	vectorAOtro.nombre = "Version piraña";
	cout << vectorAOtro << endl;

	bool vectorAIgualQueVectorA = vectorA == vectorAOtro;
	if (vectorAIgualQueVectorA)
	{
		cout << "El vector A es igual que el vector A tanto en X como en Y" << endl;
	}
	else
	{
		cout << "El vector A NO es igual que el vector B tanto en X como en Y" << endl;
	}

	// si tú no haces la sobrecarga del operador, entonces NO lo puedes usar con clases ni structs


	string myString1 = "Hola";
	myString1 += " mundo";
	cout << myString1 << endl;


}
