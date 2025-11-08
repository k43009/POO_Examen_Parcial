#pragma once
#include "Animal.h"


// los dos puntos ':' significa que hereda de la clase que esté a la derecha. Aquí Perro hereda de Animal.
class Perro :
    public Animal
{
public:
    Perro();

    void Ladrar();

    // El problema de la herencia múltiple (entre clases no virtuales puras)
    // string name; // que heredó de Animal
    // string name; // que heredó de Fungi

    // La palabra clave "override" especifica que estás modificando la funcionalidad de la clase padre para dicha función.
    void HacerRuido() override;
    void FuncionEnClasePadrePeroQueNoEsVirtual();//  override;
};

