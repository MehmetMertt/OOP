#ifndef SPOKE_H
#define SPOKE_H

#include <Part.h>


class Spoke : public Part
{
    public:
        Spoke(float v);
        virtual ~Spoke();
        void ridingDamage(int tempo, int gewicht);

    protected:

    private:
};

#endif // SPOKE_H
