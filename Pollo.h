#pragma once
#include "Animal.h"

class Pollo :
    public Animal
{
public:
    Pollo();


    void Piar();

    void HacerRuido() override;

    void FuncionEnClasePadrePeroQueNoEsVirtual();//  override;
};

