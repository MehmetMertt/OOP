#ifndef PART_H
#define PART_H


class Part
{
    public:
        Part(float durability);
        virtual ~Part();
        float durability;
        virtual void ridingDamage(int tempo, int gewicht) = 0;

    protected:

    private:
};

#endif // PART_H
