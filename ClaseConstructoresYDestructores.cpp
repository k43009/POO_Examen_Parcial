#include "ClaseConstructoresYDestructores.h"

Triangle::Triangle()
{
	cout << "soy el constructor por defecto" << endl;
	// podríamos inicializar sus variables en 0 u otro valor que queramos
	base = 0;
	altura = 0;
	vertices = new int[6];
}

// destructor que libera la memoria dinámica solicitada
Triangle::~Triangle()
{
	// podemos hacer absolutamente todo lo que haríamos en una función (void) normal.
	// NOTA: cuando borran memoria dinámica de un arreglo, TIENEN que usar los corchetes entre el delete y la variable.
	delete[] vertices; // libero la memoria dinámica que se solicitó y ya no va a ser necesaria porque 
	// ya se va a destruir.

	cout << "destructor de la clase triangle para el triángulo con base: " << base << " y altura: " << altura << endl;
}
// después de salir de las llaves del destructor, se manda a llamar el destructor de las variables miembro de la clase.
// En el orden inverso en el que se declaran en la clase.


Triangle::Triangle(float altura, float in_base)
{
	cout << "soy el constructor que recibe altura y base." << endl;
	// como recordatorio: "this" se refiere a la instancia específica de esta clase/struct que 
	// está mandando a llamar esta función.
	this->altura = altura;
	base = in_base; // aquí no uso el this porque la variable in_base tiene distinto nombre de base, entonces no hay ambiguedad.
	vertices = new int[6];
}

// esto hace la asignación de los valores ": altura(altura), base(base)"
//Triangle::Triangle(float altura, float base) : altura(altura), base(base)
//{
//	cout << "soy el constructor que recibe altura y base." << endl;
//	// como recordatorio: "this" se refiere a la instancia específica de esta clase/struct que 
//	// está mandando a llamar esta función.
//}


Triangle GenerarTriangulo(float altura, float base)
{
	Triangle myTriangle;
	myTriangle.altura = altura;
	myTriangle.base = base;
	return myTriangle;
}

Interna1::~Interna1()
{
	cout << "destruyendo Interna1" << endl;
}

Interna2::~Interna2()
{
	cout << "destruyendo Interna2" << endl;
}

ostream& operator<<(ostream& os, const Triangle& obj)
{
	os << "base: " << obj.base << " altura: " << obj.altura;
	// Implementation to output obj's data to os
	return os;
}