#include "Tube.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

Tube::Tube(float v) : Part(v)
{
    //ctor
}

Tube::~Tube()
{
    //dtor
}

void Tube::ridingDamage(int tempo, int gewicht){
    float newDurability = this->durability - ((tempo*gewicht)/3000);
    if(newDurability <= 0) {
        throw domain_error("Durability der Tube <= 0");
    } else {
        this->durability = newDurability;
    }

}
