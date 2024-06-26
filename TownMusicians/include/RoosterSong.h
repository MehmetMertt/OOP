#ifndef ROOSTERSONG_H
#define ROOSTERSONG_H

#include <IAnimalSong.h>


class RoosterSong : public IAnimalSong
{
    public:
        RoosterSong();
        virtual ~RoosterSong();
        char getTypeChar();
        int play(vector<IAnimalSong*>& songs, int index);


    protected:

    private:
};

#endif // ROOSTERSONG_H
