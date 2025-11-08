#pragma once
#include "Animal.h"

class Gato :
    public Animal
{
public:
    Gato();


    void Maullar();

    void HacerRuido() override;

    void FuncionEnClasePadrePeroQueNoEsVirtual();//  override;
};

