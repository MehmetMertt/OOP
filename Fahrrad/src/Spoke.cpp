#include "Spoke.h"

Spoke::Spoke(float durability) : Part(durability)
{
    //ctor
}

void Spoke::ridingDamage(int speed, int weight) {
    durability -= speed / 500.0;
    if(rand() % 5000 < weight)
        durability -= 10;
    if(durability <= 0)
        throw std::runtime_error("Spoke broke");
}

Spoke::~Spoke()
{
    //dtor
}
