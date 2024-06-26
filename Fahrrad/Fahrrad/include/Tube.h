#ifndef TUBE_H
#define TUBE_H

#include <Part.h>


class Tube : public Part
{
    public:
        Tube(float v);
        virtual ~Tube();
        void ridingDamage(int tempo, int gewicht);


    protected:

    private:
};

#endif // TUBE_H
