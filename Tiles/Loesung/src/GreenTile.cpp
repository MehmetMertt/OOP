#include "GreenTile.h"

GreenTile::GreenTile()
{
    this->marked = true;
}

GreenTile::~GreenTile()
{
    //dtor
}



void GreenTile::mark()
{
    this->marked = true;
}


char GreenTile::getColor()
{
    return 'G';
}
