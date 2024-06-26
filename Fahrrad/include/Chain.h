#ifndef CHAIN_H
#define CHAIN_H

#include <Part.h>


class Chain : public Part
{
    public:
        Chain(float durability);
        virtual ~Chain();
        void ridingDamage(int speed, int weight);

    protected:

    private:
};

#endif // CHAIN_H
