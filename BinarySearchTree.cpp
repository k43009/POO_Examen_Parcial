#include "BinarySearchTree.h"


void DemostracionBinarySearchTree()
{
	BinarySearchTree<float> myBST;

	/******* PRUEBAS DE ADD DEL ÁRBOL ****************************/
	
	myBST.Add(5); // caso del árbol vacío
	myBST.Add(3); // caso de primera vez de ir a la izquierda
	myBST.Add(8); // caso de primera vez de ir a la derecha

	// casos de ir por combinaciones de izquierdas-derechas
	myBST.Add(4); 
	myBST.Add(7);
	myBST.Add(2);
	myBST.Add(9);

	myBST.InOrderRecursivo();

	myBST.PreOrderRecursivo();

	myBST.PostOrderRecursivo();

	myBST.Add(3); // caso de manejo de valores repetidos.


}