#include "DogSong.h"
#include <stdexcept>
using namespace std;


DogSong::DogSong()
{
    //ctor
}

DogSong::~DogSong()
{
    //dtor
}



char DogSong::getTypeChar(){
    return 'D';
}

int DogSong::play(vector<IAnimalSong*>& songs, int index){
    int v_size = songs.size();
    if(index >= v_size || index < 0){
        throw invalid_argument("DogSong: Index falsch");
    }
    if(index == 0 && index + 1 < v_size && songs[index + 1] != nullptr){ // am anfang
        if(songs[index + 1]->getTypeChar() == 'C'){
            return 0;
        }
    }
    if(index == v_size - 1 && index - 1 >= 0 && songs[index - 1] != nullptr){ // am ende
        if(songs[index - 1]->getTypeChar() == 'C'){
            return 0;
        }
    }
    if(index - 1 >= 0 && songs[index - 1] != nullptr){ // schaue davor
        if(songs[index - 1]->getTypeChar() == 'C'){
            return 0;
        }
    }
    if(index + 1 < v_size && songs[index + 1] != nullptr){ // schaue danach
        if(songs[index + 1]->getTypeChar() == 'C'){
            return 0;
        }
    }

    return 1;


}
