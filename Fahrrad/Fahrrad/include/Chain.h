#ifndef CHAIN_H
#define CHAIN_H

#include <Part.h>


class Chain : public Part
{
    public:
        Chain(float v);
        virtual ~Chain();
        void ridingDamage(int tempo,int gewicht);

    protected:

    private:
};

#endif // CHAIN_H
