#ifndef IANIMALSONG_H
#define IANIMALSONG_H
#include <vector>


using namespace std;

class IAnimalSong
{
    public:
        IAnimalSong();
        virtual ~IAnimalSong();
        virtual char getTypeChar() = 0;
        virtual int play(vector<IAnimalSong*>& songs, int index) = 0;



    protected:

    private:
};

#endif // IANIMALSONG_H
