#include "CosasViejasDelMain.h"

int Resta(int a, int b)
{
	int resultado = a - b;
	return resultado;
}

int Division(int a, int b)
{
	return a / b;
}


// estos cambios los hizo juanito en su máquina
int FuncionJuanito()
{
	cout << "esta es la maravillosa funcion de Juanito" << endl;
	return 0;
}

// Estos cambios los hice yo en mi máquina.
int FuncionAdrian()
{
	cout << "esta es la funcion de Adrian" << endl;
	return 0;
}

float RectanguloClase::ObtenerArea()
{
	return alto * ancho;
}

// Los parámetros de una función son los valores "externos a ella" que se le pasan para hacer un procedimiento.
int SumaDeTres(int a, int b, int c)
{
	return a + b + c;
}

// Overload = sobrecarga
// regresan el mismo tipo de dato, se llaman exactamente igual, pero reciben distintos parámetros, ya sea de tipo o cantidad
int SumaDeTres(char a, char b, int c)
{
	if (a < 'a' || a > 'z')
		// entonces no es una letra
		return a + b + c;
}

// Ejemplos básicos de sobrecarga con 2, 3 y 4 parámetros
int Suma(int a, int b)
{
	return a + b;
}

int Suma(int a, int b, int c)
{
	return a + b + c;
}

int Suma(int a, int b, int c, int d)
{
	return a + b + c + d;
}




void FuncionConParametrosPorValor(int a, int b)
{
	a = a + b;
	cout << "el valor de a ahora es: " << a << endl;
}

void FuncionConParametrosPorReferencia(int& a, int b)
{
	a = a + b;
	cout << "el valor de a, pasador por referencia, ahora es: " << a << endl;
}

void FuncionConParametrosQueSonPunteros(int* a, int b)
{
	*a = *a + b; // esto modifica el valor que tiene dentro la dirección de memoria a la que apunta 'a'
	cout << "el valor de a, pasado por referencia, ahora es: " << *a << endl;

	cout << "La dirección de memoria a la que apunta a es: " << a << endl;
	a = a + b; // esto modifica la dirección de memoria a la que apunta 'a' (los mueve b*(tamañoDeInt) a la derecha en memoria)
	cout << "La dirección de memoria a la que apunta a después de sumarle b es: " << a << endl;
}

void EsLunes(int dia)
{
	// esto de aquí primero manda a llamar la función y luego checa si sí es lunes.
	if (dia == 0) // 0 es lunes, digamos
	{
		cout << "es lunes" << endl;
	}
}

void ImprimirEsLunes()
{
	cout << "es lunes" << endl;
}


void FuncionPila1()
{
	cout << "función pila 1 \n";
	FuncionPila2();
}

void FuncionPila2()
{
	cout << "función pila 2 \n";
	FuncionPila3();
}

void FuncionPila3()
{
	cout << "función pila 3 \n";
}

void DemostracionArraysNormales()
{

	// le tenemos que dar el tamaño de antemano.
	int myIntArray[10];
	cout << myIntArray[0] << endl;


	// el tamaño tiene que ser una constante, una variable normal NO es constante, 
	// entonces no la podemos usar para definir ese tamaño.
	// int tamanioArray = 10;
	// int myIntArray2[tamanioArray];

	// Sí se puede usar un valor definido (#define), constante (const)
	int myDefineArray[TAMANO_MY_INT_ARRAY];

	int myDefineArrayConMultiplicacion[MULTIPLICACION_2_X_3];

	for (int i = 0; i < MULTIPLICACION_2_X_3; i++)
	{
		myDefineArrayConMultiplicacion[i] = i;
		cout << "myDefineArrayConMultiplicacion[i] es: " << myDefineArrayConMultiplicacion[i];
	}

	int myDefineArrayConMacro[MULTIPLICACION_CON_PARAMETROS(10, 4)];


	// arreglos bidimensionales
	int myBidimensionalArray[2][3];
	// [X1,X2]
	// [Y1,Y2]
	// [Z1,Z2]
	// Lo que la computadora hace en memoria

	// un arreglo de [N][M] es lo mismo que un arreglo de [N*M]
	int bidimensional[2][3];
	int unidimensional[2 * 3];


	for (int x = 0; x < 2; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			myBidimensionalArray[x][y] = x * 3 + y;
			cout << "myBidimensionalArray[" << x << "][" << y << "]" << myBidimensionalArray[x][y] << endl;
		}
	}


	int tridimensional[2][3][4];

	for (int x = 0; x < 2; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			for (int z = 0; z < 4; z++)
			{
				tridimensional[x][y][z] = (x * 3 * 4) + (y * 4) + z;
				cout << "myBidimensionalArray[" << x << "][" << y << "][" << z << "]: " << myBidimensionalArray[x][y] << endl;
			}
		}
	}

	// Esto se acaba la memoria estática cuando ponemos 365*1000, 
	//int nDimensional[365][100];
	//for (int x = 0; x < 365; x++)
	//{
	//	for (int y = 0; y < 100; y++)
	//	{
	//		nDimensional[x][y] = x * 100 + y;
	//		cout << "nDimensional[" << x << "][" << y << "]" << nDimensional[x][y] << endl;
	//	}
	//}
}