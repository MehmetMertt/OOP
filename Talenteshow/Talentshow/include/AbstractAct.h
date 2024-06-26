#ifndef ABSTRACTACT_H
#define ABSTRACTACT_H
#include <vector>

using namespace std;

class AbstractAct
{
    public:
        AbstractAct();
        virtual ~AbstractAct();
        int intensity;
        virtual char getType() = 0;
        virtual int getValue(vector<AbstractAct*>* acts, int index) = 0;

    protected:

    private:
};

#endif // ABSTRACTACT_H
