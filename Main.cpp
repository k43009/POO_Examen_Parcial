// Incluye el código (archivo, o biblioteca) que se pida. // Es básicamente lo mismo que el import en python o Java, 
// En este caso, está incluyendo la biblioteca iostream.
#include <iostream>
// El namespace de "std" trae un montón de funcionalidades útiles para desarrollo en c++ que son Standard. 
// De ahí su nombre STanDard STD.
using namespace std;

#include "CosasViejasDelMain.h"
#include "ArchivosEjemplo.h"
#include "ArchivoEjemplo2.h"
#include "TareaEjemplo.h"

#include "WebPacket.h"
#include "EjerciciosMemoriaDinamica.h"
#include "ClaseConstructoresYDestructores.h"

#include "ExplicacionIfndef.h"

// aquí ya no se procesa lo del bloque #ifndef porque ya se procesó en el "ExplicacionIfndef.h" y ahí ya se definió
// el símbolo EXPLICACIONIFNDEF_H.
#ifndef EXPLICACIONIFNDEF_H
#define EXPLICACIONIFNDEF_H
// si no está definido X, entonces defíneme X

// todas las cosas que tienen # son directivas de preprocesador

// ifndef -> if undefined, "si no está definido", se procesa (para compilarse) todo el código que esté entre 
// ese #ifndef y el #endif




class ExplicacionIfndef
{
};

#endif // !EXPLICACIONIFNDEF_H

#include "ParametrosPorReferenciaComoSalidaDeFuncion.h"

#include "ExplicacionTemplates.h"
#include "DynamicArray.h"
#include "Stack.h"

#include "StackComposicion.h"
#include "Queue.h"

#include "ExplicacionStatic.h"
#include "LinkedList.h"
#include "SentinelLinkedList.h"

#include "ExplicacionDirectivasDePreprocesador.h"

#include "Perro.h"
#include "Gato.h"
#include "Humano.h"

#include "UsuarioProfesor.h"
#include "Vector2D.h"

#include "BinarySearchTree.h"


#define TAMANO_EJEMPLO_CUADRATICO 2

int main()
{

	DemostracionBinarySearchTree();

	DemostracionSentinelLinkedList();


	DemostracionLinkedList();

	DemostracionSobrecargaDeOperadores();

	DemostracionHerenciaDeClases();

	// DemostracionHerenciaClaseUsuario();


	DemostracionDirectivasDePreprocesador();




	// arreglo de N*N donde N es el número de elementos. Y N*N = N^2
	int cuadratico[TAMANO_EJEMPLO_CUADRATICO][TAMANO_EJEMPLO_CUADRATICO];
	int contadorDePrints = 0;
	for (size_t y = 0; y < TAMANO_EJEMPLO_CUADRATICO; y++)
	{
		for (size_t x = 0; x < TAMANO_EJEMPLO_CUADRATICO; x++)
		{
			cout << "X:" << x << " Y:" << y << ", ";
			contadorDePrints++;
		}
		cout << "Contador de prints fue " << contadorDePrints << 
			" después del for interno número: " << y << endl;
	}
	cout << endl;

	MainExplicacionStatic();

	MainQueues();

	MainParametrosPorReferenciaComoSalidaDeFuncion();

	DemostracionDynamicArray();

	Stack myStack = Stack(5);
	for (int i = 0; i < 6; i++)
	{
		myStack.Push(i);
	}
	myStack.PrintStack();
	myStack.Pop();

	int myArrayForTemplate[10];
	ImprimirArrayTemplate(myArrayForTemplate, 10);

	float myFloatArrayForTemplate[10];
	ImprimirArrayTemplate(myFloatArrayForTemplate, 10);

	Triangle myTriangleArrayForTemplate[10];
	ImprimirArrayTemplate(myTriangleArrayForTemplate, 10);

	char myCharArrayForTemplate[10];
	ImprimirArrayTemplate(myCharArrayForTemplate, 10);



	// cuando tú no especificas el constructor, se manda a llamar el constructor por defecto.
	Triangle myTriangle; // el constructor se manda a llamar automáticamente al declarar este objeto

	myTriangle.ImprimirTriangulo();

	// Así es como se manda a llamar un constructor manualmente. En este caso estoy mandando a llamar el constructor
	// por defecto.
	Triangle myDefaultTriangle = Triangle();


	Triangle myNonDefaultTriangle = Triangle(5, 2);

	Triangle creadoPorFuncionEnVezDeConstructor = GenerarTriangulo(5, 2);


	Triangle* ptrTriangle = new Triangle();
	// como aquí le hago delete, aquí se va a mandar a llamar el destructor de Triangle.
	delete ptrTriangle;

	// el destructor de los Triangle de memoria estática declarados arriba, se manda a llamar cuando se sale de 
	// las llaves {} donde fueron declarados, en este caso, al salir de la función main().

	int dia = 0;
	if (dia == 0)
	{
		ImprimirEsLunes();
	}

	// Imprimir la dirección de memoria
	// static_cast<void*>(myAuxPointer)
	// static_cast
	// cast es una interpretación de los bits/bytes de una variable como si fuera del tipo solicitado.
	// int myCastedInt = (int)7.77; // esto es interpretar un float (7.77) como si fuera un int (que nos dará 7, porque es entero).

	// cast normalito, no estático
	void* myCastedVoidPtr = (void*)&creadoPorFuncionEnVezDeConstructor;

	// cast estático, tiene seguridad adicional, si el casteo falla lanza (throw) un error.
	int myCastedInt = static_cast<int>(7.77);

	// dynamic_cast, se usa clases con herencia

	// bool myBool = true;
	// cout << (myBool ? "true" : "false") << endl;
	// cout <<  boolalpha(myBool) << endl;

	// If de una sola línea
	// (condition) ? then : else

	// no se puede declarar variables void.
	// void myVoid;
	// sí podemos hacer punteros a void :D 
	// se usan para punteros a funciones
	// void* myVoidPointer; // NO LOS VAMOS A VER NI USAR EN ESTA CLASE, PERO LES DEJO EL DATO.

	int valorA = 1;
	int valorB = 2;
	cout << "el valorA antes de la función con parámetros por valor es: " << valorA << endl;
	FuncionConParametrosPorValor(valorA, valorB);
	cout << "el valorA después de la función con parámetros por valor es: " << valorA << endl;

	FuncionConParametrosPorReferencia(valorA, valorB);
	cout << "el valorA después de la función con parámetros por referencia es: " << valorA << endl;

	// le digo a la variable myPointer que ahora guarda la dirección de memoria donde está la variable valorA.
	int* myPointer = &valorA;
	FuncionConParametrosQueSonPunteros(myPointer, valorB);
	cout << "el valorA después de la función con parámetros por referencia es: " << valorA << endl;

	*myPointer += 10;

	

	// En el main del proyecto, mandan a llamar el Main de la tarea en específico que estén entregando.
	MainTareaEjemplo();

	// Para la segunda tarea, por ejemplo, ya solo pondrían la llamada al Main de esa nueva tarea.
	// MainTareaEjemplo2();

	// Para la tarea 3, lo mismo.
	// MainTareaEjemplo3();

	MainWebPacket();

	// Suma(1, 2);

	// cout está dentro del namespace de std, por necesitamos incluirlo en el archivo.
	// cout viene de C que es Console y out que es salida. Entonces lo que hace es mandar información de salida a la consola.
	// endl es End Line, que sería terminar línea que lo que hace es pasarse a la siguiente línea de texto.
	// '\n' es básicamente lo mismo que el endl. 
	cout << "hola mundo \n hola mundo 2 \n"; 
	// cout << "hola mundo 2" << endl;
	cout << "Suma(1, -2) es: " << Suma(1, -2) << endl;
	
	cout << "Multiplicacion(2, 4) es: " << Multiplicacion(2, 4) << endl;


	cout << "Division(2, 4) es: " << Division(2, 4) << endl;


	TipoDeUsuario tipoDeUsuario = TipoDeUsuario::Alumno;
	switch (tipoDeUsuario)
	{
	case Alumno:
		cout << "switch es alumno " << endl;
		tipoDeUsuario = TipoDeUsuario::Profesor;
		break;
	case Profesor:
		cout << "switch es profe " << endl;
		break;
	case Admin:
		cout << "switch es admin " << endl;
		break;
	default:
		{
			cout << "ERROR O WARNING: switch cayó en default porque traía el valor: " << tipoDeUsuario << endl;
			// return 0; // Return es: salte de la función donde está puesto. Te lleva a la llave de cierre de la función en donde está.
		}
	}

	// Programación defensiva es hacer código que 
	// 1) Toma en cuenta los casos extremos o los poco comunes, o los nulos o los valores inválidos
	// 2) Que si falla algo, no va a fallar todo el programa
	// 3) Y que si falla, va a dejar un rastro de dónde falló
	// 4) Y que va a tratar de recuperarse lo mejor posible.


	int tamanioDelEjeX = 10;
	int tamanioDelEjeY = 10;
	int valorDeYQueHaraContinue = 4;
	int valorDeYQueHaraBreak = 5;

	for (int x = 0; x < tamanioDelEjeX; x++)
	{
		cout << "antes del for de Y" << endl;

		for (int y = 0; y < tamanioDelEjeY; y++)
		{
			if (y < valorDeYQueHaraContinue)
				continue;

			cout << "antes del break dentro del for de Y, y es: " << y << endl;
			if (y == valorDeYQueHaraBreak)
			{
				break; // te saca del scope del ciclo dentro del cual está, saltándose todo lo que esté debajo.

			} // esta es la llave de cierre del If, que el if es condicional pero no es un ciclo.
			cout << "después del break dentro del for de Y, y es: " << y << endl;
		}// esta es la llave de cierre del for (de la Y) que sí es un ciclo.

		cout << "después del for de Y" << endl;
	}

	// Operadores lógicos
	// && (operador AND) ambos tienen que ser verdad para que el resultado sea verdad
	// || (operador OR) cualquiera de los dos tienen que ser verdad para que el resultado sea verdad
	// ! (operador NOT) invierte el valor de verdad de a quien se le use
	// bool myBool = true;
	// if(myBool != true)
	// XOR es uno de los dos valores tiene que ser verdad, pero el otro no. Existe la palabra clave en c++ "xor".
	// if( (x==true && y == false) ||  
	// 	(x==false && y == true))

	// La pila de llamadas le dice al programa dónde va la ejecución, y a dónde regresar una vez que acabe 
	// con la función que esté ejecutando actualmente
	FuncionPila1();


	Rectangulo myRectangulo;
	myRectangulo.alto = 5.0f;
	cout << "el alto de myRectangulo es: " << myRectangulo.alto << endl;
	myRectangulo.ancho = 3.0f;

	Rectangulo* myRectanguloPointer = &myRectangulo;
	(*myRectanguloPointer).alto = 10.0f; // esta línea y la de abajo hacen exactamente lo mismo.
	myRectanguloPointer->alto = 10.0f;


	Rectangulo myOtherRectangulo = Rectangulo();
	cout << "el alto de myOtherRectangulo es: " << myOtherRectangulo.alto << endl;

	RectanguloClase myRectanguloClase;
	myRectanguloClase.alto = 5.0f;
	myRectanguloClase.ancho = 5.0f;
	myRectanguloClase.ObtenerArea(); // aquí le estoy pidiendo que me dé el área de este rectángulo en específico.




	/*bool myBoolSinInicializar;
	cout << myBoolSinInicializar << endl;*/


	MainEjemplosMemoriaDinamica();



	// Return es: salte de la función donde está puesto. Te lleva a la llave de cierre de la función en donde está.

	// Retorna el código de error de la ejecución del Main.
	// El código "0" significa que no hubo error alguno. Significa que el main terminó satisfactoriamente.
	return 0;
}







