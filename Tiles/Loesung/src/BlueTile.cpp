#include "BlueTile.h"

BlueTile::BlueTile()
{
    int random_value = std::rand() % 2;
    if(random_value == 0){
        this->marked = false;
    } else {
        this->marked = true;
    }
}

BlueTile::~BlueTile()
{
    //dtor
}

void BlueTile::mark(){
    this->marked = true;
}

char BlueTile::getColor(){
    return 'B';
}
