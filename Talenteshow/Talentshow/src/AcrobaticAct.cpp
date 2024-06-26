#include "AcrobaticAct.h"
#include <iostream>

AcrobaticAct::AcrobaticAct(int v)
{
    this->intensity = v;
}

AcrobaticAct::~AcrobaticAct()
{
    //dtor
}


char AcrobaticAct::getType(){
    return 'A';
}

int AcrobaticAct::getValue(vector<AbstractAct*>* acts, int index){
    if(index > static_cast<int>(acts->size()) || index < 0){
        throw out_of_range("Der Index ist außerhalb der Grenzen!");
    }
    int counter = 0;
    for(auto it = acts->begin(); it != acts->end(); ++it){
        if((*it)->getType() == 'A'){
            counter++;
        }
    }
    if(counter >= 3){
        return 1;
    }
    return intensity;
}
