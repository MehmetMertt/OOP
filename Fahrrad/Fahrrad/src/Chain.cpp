#include "Chain.h"
#include "Part.h"
#include <iostream>

using namespace std;

Chain::Chain(float v) : Part(v)
{
    //ctor
}

void Chain::ridingDamage(int tempo,int gewicht){
    float newDurability = this->durability - tempo/100;
    if(newDurability <= 0) {
        cout << "ok";
        throw out_of_range("Durability der Chain <= 0");
    } else {
        this->durability = newDurability;
    }
}

Chain::~Chain()
{
    //dtor
}
