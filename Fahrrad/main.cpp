#include <iostream>
#include <time.h>
#include "Bicycle.h"

using namespace std;

int main()
{
    srand(time(NULL));
    Bicycle b;
    int distance = b.ride(500, 40, 80);
    std::cout << distance;
    return 0;
}
