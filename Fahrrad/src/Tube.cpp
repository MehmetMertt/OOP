#include "Tube.h"

Tube::Tube(float durability) : Part(durability)
{
    //ctor
}

void Tube::ridingDamage(int speed, int weight) {
    durability -= speed * weight / 3000.0;
    if(durability <= 0)
        throw std::domain_error("Tube busted");
}

Tube::~Tube()
{
    //dtor
}
