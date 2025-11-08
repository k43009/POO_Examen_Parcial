#pragma once

#include<iostream>
using namespace std;


// Todos los defines se remplazan por el texto que tienen a la derecha.
#define TAMANO_MY_INT_ARRAY 10
#define MULTIPLICACION_2_X_3 2*3 

// aquí, lo que está entre paréntesis son parámetros, pero los parámetros que uses tienen que ser constantes, no variables.
#define MULTIPLICACION_CON_PARAMETROS(a, b) a*b

// estas de abajo sí son cosas ya más elaboradas, avanzadas, complejas, no necesito que se las aprendan ni
// que las dominen, solo que sepan que existen.
#define DEFINIR_VARIABLES float myValue1; float myValue2; float myValue3;
#define DEFINIR_VARIABLES_CON_NOMBRE(a, b, c) float a; float b; float c;


// Por qué 'C' se llama 'C'? Porque existen los lenguajes A y B

// C++ es una alternativa al lenguaje 'C'

// por qué se llaman archivos ".cpp"
// C Plus Plus -> C++


// Definir y Declarar
// Declara es decir: Esto existe. Esto puede ser una variable, una función, una estructura, una clase, entre otros.
// Definir es decir: Qué hace, qué tiene dentro, para que sirve, etc.


// Declarar una variable:
//int myInt = 7; // a partir de esta línea, el código ya sabe que esta variable existe.
//int myOtherInt = 5; // esta es declaración Y también asignación de valor.

// Intenten evitar declarar variables con el mismo nombre dentro de Contextos de ejecución anidados 
/*
int Suma(int a, int b)
{
	int resultado = a + b;
	if (resultado < 0)
	{
		int resultado2 = 0;
		cout << resultado2;
	}
	return resultado;
}
*/

int Resta(int a, int b);

int Division(int a, int b);


// estos cambios los hizo juanito en su máquina
int FuncionJuanito();

// Estos cambios los hice yo en mi máquina.
int FuncionAdrian();

enum TipoDeUsuario
{
	Alumno = 0,
	Profesor,
	Admin = 255,
	Otro
};

//enum TipoDeUsuarioBanderas
//{
//	Alumno = 1,
//	Profesor = 2,
//	Admin = 4,
//	Otro = 8,
//};

//[0000 0011] // nuestro usuario
//[0000 0110] // máscara de bits para checar si eres del tipo "Admin" o un profe
//
//[0000 0010] // AND LÓGICO que es como el &&


void FuncionPila1();

void FuncionPila2();

void FuncionPila3();


struct Rectangulo
{
	// Por defecto, todas las propiedades de una struct son públicas.
	// public es que se puede usar esa propiedad de la clase desde cualquier instancia/objeto de dicha clase.
public:
	float alto;
	float ancho;

	// generalmente* las structs no deben llevar funciones/métodos, mientras que las classes sí.
	// *aplican casos especiales.


	bool myBool;

	// DEFINIR_VARIABLES_CON_NOMBRE(posicionx, posiciony, posicionz)
};

class RectanguloClase
{
	// Por el contrario a las structs, las classes tienen todas sus propiedades como privadas.
	// privado es que solo se puede usar dicha propiedad dentro del alcance (las '{}') de la clase donde fue declarado/definido.
	// Entonces solo sirven para cosas internas de dicha clase (o estructura).
	// Para poder acceder a ellas hay que especificarle que son públicas
// private:
public:
	float alto;
	float ancho;

	float ObtenerArea();

	// protected
protected:

};



// Los parámetros de una función son los valores "externos a ella" que se le pasan para hacer un procedimiento.
int SumaDeTres(int a, int b, int c);

// Overload = sobrecarga
// regresan el mismo tipo de dato, se llaman exactamente igual, pero reciben distintos parámetros, ya sea de tipo o cantidad
int SumaDeTres(char a, char b, int c);

// Ejemplos básicos de sobrecarga con 2, 3 y 4 parámetros
int Suma(int a, int b);

int Suma(int a, int b, int c);

int Suma(int a, int b, int c, int d);



// Caso de uso que podría ser real.



//string InvertirCadena(string texto)
//{
//	string invertida;
//	for (int i = texto.length() - 1; i > 0; i++)
//	{
//		invertida.append(texto.at);
//	}
//	return;
//}


// parámetros por valor y parámetros por referencia (value & reference)
// Los de valor se pasa una copia del valor de la variable.
void FuncionConParametrosPorValor(int a, int b);

// si nosotros queremos que los cambios que una variable sufre dentro de una función sean permanentes, 
// lo tenemos que pasar como un parámetro por referencia.
// Lo que pasa cuando pasas un parámetro por referencia, es que realmente pasas la dirección de memoria de la variable,
// por eso es que el cambio permanece.
void FuncionConParametrosPorReferencia(int& a, int b);

// el cambio a lo que está dentro de donde apunta 'a' sí es permanente, pero los cambios a 'a' no lo son.
void FuncionConParametrosQueSonPunteros(int* a, int b);



// 1) checar si es lunes, y si sí, llamar una función  que imprima: "es lunes"
void EsLunes(int dia);

void ImprimirEsLunes();


void DemostracionArraysNormales();


// void es un tipo de dato (técnicamente hablando). La traducción de void sería "vacío".
// cuando tú dices que el tipo de retorno de una función es void, sería que su retorno es vacío, es decir, es nada.
// Entonces no necesitan un "return". Lo pueden tener, pero solo sirve para salirse de la función.

// Qué es un Main?
// ¿Por qué Main? Main significa principal, se refiere a que es el punto principal de entrada de la ejecución de este programa
// ¿Por qué int? Más específicamente Main es una función, entonces necesita cumplir con la sintáxis de una función.
	// tipoDeData + Nombre +( parámetros* ) +{ otroCódigo }.
	// Main es una función que debe regresar un valor entero (int).

