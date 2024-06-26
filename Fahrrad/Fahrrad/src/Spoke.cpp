#include "Spoke.h"
#include <stdlib.h>
#include <stdexcept>

using namespace std;

Spoke::Spoke(float v) : Part(v)
{
    //ctor
}

Spoke::~Spoke()
{
    //dtor
}

void Spoke::ridingDamage(int tempo, int gewicht){
    float newDurability = this->durability - tempo/500;
    if(rand() % 5000 < gewicht){
        newDurability = newDurability - 10;
    }
    if(newDurability <= 0) {
        throw runtime_error("Durability der main <= 0");
    } else {
        this->durability = newDurability;
    }

}
