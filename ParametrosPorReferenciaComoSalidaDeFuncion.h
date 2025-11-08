#pragma once

#include<iostream>
#include<filesystem>
using namespace std;

/*
2.4) Hacer una función (método) que reciba por referencia una variable 
de tipo Rect e imprima las coordenadas X y Y de dicha variable, 
así como las coordenadas X y Y donde terminaría ese Rect tomando 
en cuenta su Alto y Ancho. 
La función debe regresar false si al menos uno de los campos del Rect 
es menor que 0, y regresar true al final si todo sale bien. 
Además, saquen las coordenadas X y Y donde terminaría dicho 
Rect como dos parámetros por referencia.
*/

// Los parámetros por referencia no solo sirven para arrays y punteros,
// a veces se usan para guardar uno o más variables como resultado
// de una función. 
bool CargarArchivo(string nombreDeArchivo, string& out_archivoCargado);


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
bool ObtenerPerimetroYArea(int alto, int ancho, int& perimetro, int& area);

void MainParametrosPorReferenciaComoSalidaDeFuncion();
