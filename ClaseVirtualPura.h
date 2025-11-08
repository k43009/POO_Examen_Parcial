#pragma once


// CORRECCIÓN: 
// Una función virtual pura es aquella que NO tiene una implementación, únicamente una declaración y termina en = 0;
// por ejemplo: virtual void ImprimirNombre() = 0;
// Para qué sirven? Para obligar a las clases que la heredan a hacerle un override, si no no se podrán instanciar. :D 

// Una clase abstracta: Una clase que tiene AL MENOS una función virtual pura SIN hacerle override.
// Cualquier clase que herede de una clase abstracta SIGUE SIENDO ABSTRACTA mientras siga habiendo funciones 
// a las que no se les haya hecho override.
// Para qué sirve una clase abstracta? Para impedir que se hagan instancias de dicha clase; 
// sirven solo para manejar a las clases que hereden de dicha clase base (a través de punteros).

// Una clase Interfaz (en inglés es Interface) es aquella en la que TODAS sus funciones son virtuales puras.
// Estas son las ÚNICAS clases que se pueden usar en herencia múltiple.
// Nunca jamás debe haber herencia múltiple, a menos que todas menos una sean interfaces.
// Ejemplo: ClaseHija : clasePadre, Interfaz1, Interfaz2   // esto es correcto
// Ejemplo: ClaseHija : Interfaz1, Interfaz2, InterfazN		// también es correcto
// Ejemplo: ClaseHija : clasePadre1, clasePadre2			// Esto NO es correcto, porque más de una clase padre NO es interfaz.
// Por estándar llevan el prefijo 'I' (i mayúscula), por ejemplo IMyInterfaceClass;

class ClaseConFuncionesVirtualesPuras
{

	// El ponerle que una función es = 0 lo convierte en una función virtual Pura.
	// Solo declara los estándares de las funciones que las clases hijas DEBERÁN implementar.
	virtual void ImprimirNombre() = 0;
};

