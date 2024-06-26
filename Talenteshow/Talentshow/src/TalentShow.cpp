#include "TalentShow.h"
#include "AbstractAct.h"
#include <iostream>

using namespace std;

TalentShow::TalentShow(std::string program, int intensityArr [])
{
    for(int i = 0; i < static_cast<int>(program.size()); i++) {
        char curr = program.at(i);
        switch(curr) {
        case 'M':
            this->program.push_back(new MagicArt(intensityArr[i]));
            break;
        case 'S':
            this->program.push_back(new SongAct(intensityArr[i]));
            break;
        case 'A':
            this->program.push_back(new AcrobaticAct(intensityArr[i]));
            break;
        }
    }
}

int TalentShow::itsShowtime() {
    int sum = 0;
    int index = 0;
    for(auto& a : this->program){
        try{
            sum += a->getValue(&this->program, index);
        } catch(out_of_range& e){
            cout << e.what();
        } catch(...){
            cout << "Unknown Error!";
        }

    index++;
    }
    return sum;
}

TalentShow::~TalentShow()
{
    for(AbstractAct* a : this->program){
        delete a;
    }
}
