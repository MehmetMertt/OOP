#ifndef CATSONG_H
#define CATSONG_H

#include <IAnimalSong.h>


class CatSong : public IAnimalSong
{
    public:
        CatSong();
        virtual ~CatSong();
        char getTypeChar();

        int play(vector<IAnimalSong*>& songs, int index);

    protected:

    private:
};

#endif // CATSONG_H
