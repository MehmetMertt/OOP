#include "Floor.h"
#define SIZE 3
#include <iostream>
#include "GreenTile.h"
#include "BlueTile.h"


using namespace std;

Floor::Floor()
{

    this->tiles.resize(SIZE);
    for(int i = 0; i < SIZE; ++i){
        this->tiles[i].resize(SIZE);
        for(int j = 0; j < SIZE; ++j){
            Tile* tile;
            int random = rand() % 2;
            if(random == 0){
                tile = new BlueTile();
            } else {
                tile = new GreenTile();
            }
            cout << "j: " << j << " i: " << i << "\n";
            this->tiles[i][j] = tile;
        }
    }
}

Floor::~Floor()
{
    for(int i = 0; i < SIZE; ++i){
        for(int j = 0; j < SIZE; ++j){
            delete this->tiles[j][i];
        }
    }
}

void Floor::print(){
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            this->tiles[j][i]->display();
        }
        cout << endl;
    }
}

void Floor::mark(int x, int y){
    if(x > 2 || x < 0){
        throw invalid_argument("x muss zwischen 0 - 2 liegen!");
    }
    if(y > 2 || y < 0){
        throw invalid_argument("y muss zwischen 0 - 2 liegen!");
    }
    this->tiles[y][x]->mark();

}

void Floor::replace(int x, int y){
    if(x > 2 || x < 0){
        throw invalid_argument("x muss zwischen 0 - 2 liegen!");
    }
    if(y > 2 || y < 0){
        throw invalid_argument("y muss zwischen 0 - 2 liegen!");
    }
    if(tiles[y][x]->getColor() == 'G'){
        delete this->tiles[y][x];
        this->tiles[y][x] = new BlueTile();
    } else if(this->tiles[y][x]->getColor() == 'B' && this->tiles[y][x]->isMarked() == true){
            delete this->tiles[y][x];
            this->tiles[y][x] = new RedTile();
    }
}

bool Floor::isRed(){
    for(int i = 0; i < SIZE; ++i){
        for(int j = 0; j < SIZE; ++j){
            if(this->tiles[j][i]->getColor() != 'R'){
                return false;
            }
        }
    }
    return true;
}


