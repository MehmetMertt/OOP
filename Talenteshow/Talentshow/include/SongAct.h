#ifndef SONGACT_H
#define SONGACT_H

#include <AbstractAct.h>


class SongAct : public AbstractAct
{
    public:
        SongAct(int v);
        virtual ~SongAct();
        int getValue(vector<AbstractAct*>* acts, int index);
        char getType();
    protected:

    private:
};

#endif // SONGACT_H
