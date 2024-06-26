#ifndef GREENTILE_H
#define GREENTILE_H

#include <Tile.h>


class GreenTile : public Tile
{
    public:
        GreenTile();
        virtual ~GreenTile();
        void mark();
        char getColor();

    protected:

    private:
};




#endif // GREENTILE_H
