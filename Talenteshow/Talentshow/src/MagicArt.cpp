#include "MagicArt.h"
#include <iostream>

MagicArt::MagicArt(int v)
{
    this->intensity = v;
}

MagicArt::~MagicArt()
{
    //dtor
}

char MagicArt::getType(){
    return 'M';
}

int MagicArt::getValue(vector<AbstractAct*>* acts, int index){
    if(index > static_cast<int>(acts->size()) || index < 0){
        throw out_of_range("Der Index ist außerhalb der Grenzen!");
    }
    if(index-1 < 0){
        return this->intensity;
    }
    if((*acts)[index-1]->getType() == 'M'){
        int i = this->intensity;
        return (i/2);
    } else {
        return this->intensity;
    }
}



