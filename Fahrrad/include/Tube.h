#ifndef TUBE_H
#define TUBE_H
#include "Part.h"


class Tube : public Part
{
    public:
        Tube(float durability);
        virtual ~Tube();
        void ridingDamage(int speed, int weight);

    protected:

    private:
};

#endif // TUBE_H
