#include "RedTile.h"

RedTile::RedTile()
{
    this->marked = false;
}

void RedTile::mark() {
    this->marked = false;
}

char RedTile::getColor(){
    return 'R';
}

RedTile::~RedTile()
{
    //dtor
}
