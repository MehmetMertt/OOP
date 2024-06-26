#ifndef PART_H
#define PART_H
#include <stdexcept>

class Part
{
    public:
        Part(float durability);
        virtual ~Part();
        virtual void ridingDamage(int speed, int weight) = 0;

    protected:
        float durability;

    private:
};

#endif // PART_H
