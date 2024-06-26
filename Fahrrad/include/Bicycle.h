#ifndef BICYCLE_H
#define BICYCLE_H
#include <vector>
#include <iostream>
#include <stdexcept>
#include "Part.h"
#include "Chain.h"
#include "Tube.h"
#include "Spoke.h"


class Bicycle
{
    public:
        Bicycle();
        virtual ~Bicycle();
        int ride(int distance, int speed, int weight);

    protected:

    private:
        int brokenSpokes;
        std::vector<Part*> parts;
};

#endif // BICYCLE_H
