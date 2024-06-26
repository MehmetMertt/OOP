#ifndef ACROBATICACT_H
#define ACROBATICACT_H

#include <AbstractAct.h>


class AcrobaticAct : public AbstractAct
{
    public:
        AcrobaticAct(int v);
        virtual ~AcrobaticAct();
        char getType();
        int getValue(vector<AbstractAct*>* acts, int index);

    protected:

    private:
};

#endif // ACROBATICACT_H
