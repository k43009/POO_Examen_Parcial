#include "ParametrosPorReferenciaComoSalidaDeFuncion.h"

// Los parámetros por referencia no solo sirven para arrays y punteros,
// a veces se usan para guardar uno o más variables como resultado
// de una función. 
bool CargarArchivo(string nombreDeArchivo, string& out_archivoCargado)
{
	// Si el archivo nombreDeArchivo existe
	{
		// entonces lo cargamos en la variable out_archivoCargado.
		// Ya que lo cargamos, regresamos true.
		return true;
	}

	// si no existe, regresamos false.
	return false;
}


// Primero que todo, esta función necesitaría retornar dos valores: 
// Perímetro y Área, sin embargo las funciones solo pueden retornar una variable.
// Una posibilidad sería hacer una struct que tenga dos variables y ponérselas ahí...
// pero entonces tendríamos un montón de structs de 1, 2, 3, ... n variables solo para eso.
// La otra posibilidad, es guardar esos valores en variables pasadas por referencia,
// ya que así los cambios que se hagan a esas variables son permanentes.
// 
// Además, digamos que esta función solo es válida si alto y ancho son mayores que 0,
// de lo contrario regresa false. Entonces la función checa si es válido,
// y solo si sí es válido calcula y asigna los valores de perímetro y área.
bool ObtenerPerimetroYArea(int alto, int ancho, int& perimetro, int& area)
{
	if (alto > 0 && ancho > 0)
	{
		perimetro = 2 * alto + 2 * ancho;
		area = alto * ancho;
		return true;
	}
	return false;
}

void MainParametrosPorReferenciaComoSalidaDeFuncion()
{
	int alto = 5;
	int ancho = 7;
	int perimetro;
	int area;
	bool esValido = ObtenerPerimetroYArea(alto, ancho, perimetro, area);
	if (esValido)
	{
		cout << "El alto y ancho son mayores que 0, entonces el perimetro es: " << perimetro
			<< " y el area es: " << area << endl;
	}
	else
	{
		cout << "alto o ancho son menores o iguales a 0. Favor de verificar. No se pudo calcular el área ni el perímetro. " << endl;
	}
}

