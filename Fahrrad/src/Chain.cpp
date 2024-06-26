#include "Chain.h"

Chain::Chain(float durability) : Part(durability)
{
    //ctor
}

void Chain::ridingDamage(int speed, int weight) {
    durability -= speed / 100.0;
    if(durability <= 0)
        throw std::out_of_range("Chain broken");
}

Chain::~Chain()
{
    //dtor
}
