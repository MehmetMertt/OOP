#ifndef SPOKE_H
#define SPOKE_H
#include "Part.h"


class Spoke : public Part
{
    public:
        Spoke(float durability);
        virtual ~Spoke();
        void ridingDamage(int speed, int weight);
        bool hasFailed();

    protected:

    private:
};

#endif // SPOKE_H
