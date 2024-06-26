#include "Bicycle.h"
#include <stdexcept>
#include <iostream>

Bicycle::Bicycle()
{

    this->parts.push_back(new Chain(100));
    this->parts.push_back(new Tube(100));
    this->parts.push_back(new Tube(100));
    for(int i = 0; i < 40; ++i){
        this->parts.push_back(new Spoke(100));
    }

}

Bicycle::ride(int distanz, int tempo, int gewicht){
    for(int i = distanz; distanz > 0; distanz--){
              for(auto it = this->parts.begin(); it != this->parts.end(); ++it){
            try {
                cout << "try" << endl;
                (*it)->ridingDamage(tempo,gewicht);
            } catch (const out_of_range& e){
                //chain
                distanz = distanz - 50;
                delete *it;
                cout << "Delte Part";
                this->parts.erase(this->parts.begin());
            } catch(const domain_error& e2){
                delete *it;
                cout << "Delte Part2";
                this->parts.erase(it);
                distanz = distanz - 10;
                return 6;
            } catch(...){
                cout << "tmm";
            }
        }
    }

        return 2;
}

Bicycle::~Bicycle()
{
    //dtor
}
