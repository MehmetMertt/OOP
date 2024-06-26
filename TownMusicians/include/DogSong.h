#ifndef DOGSONG_H
#define DOGSONG_H

#include <IAnimalSong.h>


class DogSong : public IAnimalSong
{
    public:
        DogSong();
        virtual ~DogSong();
        char getTypeChar();

        int play(vector<IAnimalSong*>& songs, int index);


    protected:

    private:
};

#endif // DOGSONG_H
