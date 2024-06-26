#include "Bicycle.h"

Bicycle::Bicycle()
{
    //ctor
    parts.push_back(new Chain(100.0));
    parts.push_back(new Tube(100.0));
    parts.push_back(new Tube(100.0));
    for(int i = 0; i < 40; i++)
        parts.push_back(new Spoke(100.0));
    brokenSpokes = 0;
}

int Bicycle::ride(int distance, int speed, int weight) {
    int travelledDistance = 0;
    for(int i = 0; i < distance; i++) {
        for(auto it = parts.begin(); it < parts.end(); it++) {
            if(*it == nullptr)
                continue;
            try {
                (*it)->ridingDamage(speed, weight);
            }
            catch(std::out_of_range& chainEx) {
                i += 50;
                delete *it;
                *it = new Chain(100.0);
                std::cout << chainEx.what() << std::endl;
            }
            catch(std::domain_error& tubeEx) {
                i += 10;
                delete *it;
                *it = new Tube(100.0);
                std::cout << tubeEx.what() << std::endl;
            }
            catch(std::runtime_error& spokeEx) {
                brokenSpokes++;
                delete *it;
                *it = nullptr;
                std::cout << spokeEx.what() << std::endl;
                if(brokenSpokes > 5)
                    return travelledDistance;
            }
        }
        travelledDistance++;
    }
    return travelledDistance;
}

Bicycle::~Bicycle()
{
    //dtor
    for(int i = 0; i < parts.size(); i++)
        delete parts.at(i);
}
