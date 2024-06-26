#ifndef FLOOR_H
#define FLOOR_H
#include "Tile.h"
#include "RedTile.h"
#include "BlueTile.h"
#include "GreenTile.h"
#include "RedTile.h"
#include <vector>
#include <algorithm>

using namespace std;

class Floor
{
    public:
        Floor();
        virtual ~Floor();
        vector<vector<Tile*>> tiles;
        void print();
        void mark(int x, int y);
        void replace(int x, int y);
        bool isRed();

    protected:

    private:
};

#endif // FLOOR_H
