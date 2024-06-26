#ifndef MAGICART_H
#define MAGICART_H

#include <AbstractAct.h>


class MagicArt : public AbstractAct
{
    public:
        MagicArt(int v);
        virtual ~MagicArt();
        int getValue(vector<AbstractAct*>* acts, int index);
        char getType();

    protected:

    private:
};

#endif // MAGICART_H
