#include "SongAct.h"
#include <iostream>

SongAct::SongAct(int v)
{
    this->intensity = v;
}

SongAct::~SongAct()
{
    //dtor
}

char SongAct::getType(){
    return 'S';
}

int SongAct::getValue(vector<AbstractAct*>* acts, int index){
    if(index > static_cast<int>(acts->size()) || index < 0){
        throw out_of_range("Der Index ist außerhalb der Grenzen!");
    }
    if(index == 0){
        return this->intensity;
    }
    for(int i = 1; i < 4; ++i){
        int neuer_index = index - i;
        if(neuer_index < 0){
            break;
        }
        if(acts->at(neuer_index)->getType() == 'A'){
            int i = this->intensity;
            i = i + 3;
            return i;

        }
    }
    return this->intensity;
}
