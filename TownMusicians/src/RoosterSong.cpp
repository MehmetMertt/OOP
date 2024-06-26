#include "RoosterSong.h"
#include <stdexcept>

RoosterSong::RoosterSong()
{
    //ctor
}

RoosterSong::~RoosterSong()
{
    //dtor
}

char RoosterSong::getTypeChar()
{
    return 'R';
}

int RoosterSong::play(vector<IAnimalSong*>& songs, int index){
    int v_size = songs.size();
    if(index >= v_size || index < 0){
        throw invalid_argument("CatSong: Index falsch");
    }
    int roosterCounter = 0;
    for(IAnimalSong* s : songs){
        if(s->getTypeChar() == 'R'){
            roosterCounter++;
        }
    }

    if(roosterCounter == 1){
        return 3;
    }
    return 0;
}



