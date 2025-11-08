#include "ExplicacionDirectivasDePreprocesador.h"


void DemostracionDirectivasDePreprocesador()
{
	cout << myVariable << endl;


	cout << textoEnLoQueSiEstaDefinido << endl;

	// Aquí el autocompletar ni siquiera nos sugiere que exista la variable "textoEnLoQueNoEstaDefinido"
	// ya que no existe para el compilador porque ya no está definido OPCION_QUE_SE_DESDEFINE 
	// porque se le hizo #undef 

}