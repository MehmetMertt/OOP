#include <iostream>
#include "Concert.h"
#include "DogSong.h"
#include "CatSong.h"
#include "RoosterSong.h"

Concert::Concert(std::string songString)
{
    for(char s : songString)
    {
        switch(s)
        {
            case 'C': this->songs.push_back(new CatSong());
            break;
            case 'D': this->songs.push_back(new DogSong());
            break;
            case 'R': this->songs.push_back(new RoosterSong());
        }
    }
}




Concert::~Concert(){
      for (auto& song : songs) {
                    delete song;
        }
    songs.clear();
}

void Concert::printsong(){
    for(IAnimalSong* s : this->songs)
    {
        cout << s->getTypeChar() << endl;
    }
}

int Concert::play(){
    int sum = 0;
    int index = -1;
    for(auto s : this->songs)
    {
        try{
            index++;
            sum = sum + s->play(songs,index);
        } catch(const invalid_argument& e){
            cout << e.what() << endl;
        } catch(...){
            cout << "Unknown Error!";
        }

    }
    return sum;
}


