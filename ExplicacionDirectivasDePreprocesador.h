#pragma once

#include<iostream>
using namespace std;

// con #define se define un "Símbolo". En este caso, mi símbolo se llama "OPCION_ACTIVADA".
#define OPCION_ACTIVADA 

// Aún si no tiene nada a la derecha de OPCION_SIN_VALOR_ASIGNADO 
// aún cuenta como definida (como con los #ifndef). Tampoco
#define OPCION_SIN_VALOR_ASIGNADO 

// Para que un #define cuente como no definido, tiene que no estar
// #define OPCION_COMENTADA_PARA_NO_CONTAR_COMO_DEFINIDA
#define OPCION_QUE_SE_DESDEFINE


// la estructura de un bloque #ifdef / #endif es la siguiente
/*

#ifdef MI_SIMBOLO
	// Entonces se compilará el código que esté entre la línea del #ifdef y el #endif
#endif

*/


// la estructura de un bloque #ifdef / #else / #endif es la siguiente
/*

#ifdef MI_SIMBOLO
	// Entonces se compilará el código que esté entre la línea del #ifdef y la línea del #else el #endif
#else
	// Si no está definido MI_SIMBOLO, entonces se compilará el código que esté entre la línea del #else y la del #endif
#endif

*/


#ifdef OPCION_ACTIVADA

const string myVariable = "la opcion esta activada";

#else // es decir, no existe un #define OPCION_ACTIVADA en ningún .h en este archivo .h 
// ni en ningún otro .h incluído por este archivo.

const string myVariable = "opcion desactivada";

#endif

#ifdef OPCION_QUE_SE_DESDEFINE
const string textoEnLoQueSiEstaDefinido = "esta opcion se desdefinirá después de esta línea";
#endif
#undef OPCION_QUE_SE_DESDEFINE

#ifdef OPCION_QUE_SE_DESDEFINE
const string textoEnLoQueNoEstaDefinido = "esto no se va a declarar siquiera";
#endif


void DemostracionDirectivasDePreprocesador();

