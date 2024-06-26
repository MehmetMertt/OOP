#include <iostream>
#include <time.h>
#include "Bicycle.h"
#include <stdlib.h>


using namespace std;

int main()
{
    srand(time(NULL));
    Bicycle b;
    cout << "Size Before: " << b.parts.size() << endl;
    int distance = b.ride(500, 40, 80);
    std::cout << distance;
    cout << "Size After: " << b.parts.size() << endl;
    return 0;
}
