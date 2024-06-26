#include "CatSong.h"
#include <vector>
#include <stdexcept>

using namespace std;
CatSong::CatSong()
{
    //ctor
}

CatSong::~CatSong()
{
    //dtor
}


char CatSong::getTypeChar(){
    return 'C';
}

int CatSong::play(vector<IAnimalSong*>& songs, int index){
    int v_size = songs.size();
    if(index >= v_size || index < 0){
        throw invalid_argument("CatSong: Index falsch");
    }
    int dogCounter = 0;
    for(int i = 0; i <= index; ++i){
        if(songs[i]->getTypeChar() == 'D'){
            dogCounter++;
        }
    }
    return 5 - dogCounter;
}
