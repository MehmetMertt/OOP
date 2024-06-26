#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Floor.h"

using namespace std;




int main()
{
    srand(time(NULL));

    Floor boden;

    do {
        boden.print();
        cout << "\n";
        int random_x = rand() % 3;
        int random_y = rand() % 3;
        try{
            boden.mark(random_x,random_y);
        } catch(const invalid_argument& e){
            cout << e.what();
        } catch(...){
            cout << "Unknown error" << endl;
        }

        random_x = rand() % 3;
        random_y = rand() % 3;
        try{
            boden.replace(random_x,random_y);
        } catch(const invalid_argument& e){
            cout << e.what();
        } catch(...){
            cout << "Unknown error" << endl;
        }
    }while(boden.isRed() == false);

    boden.print();


    return 0;
}
