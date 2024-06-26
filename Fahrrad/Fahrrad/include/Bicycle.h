#ifndef BICYCLE_H
#define BICYCLE_H
#include <vector>

#include "Part.h"
#include "Chain.h"
#include "Tube.h"
#include "Spoke.h"


using namespace std;

class Bicycle
{
    public:
        Bicycle();
        virtual ~Bicycle();
        vector<Part*> parts;
        int brokenSpokes;
        ride(int distanz, int tempo, int gewicht);


    protected:

    private:
};

#endif // BICYCLE_H
