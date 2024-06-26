#ifndef TALENTSHOW_H
#define TALENTSHOW_H
#include <string>
#include <vector>
#include "AbstractAct.h"
#include "MagicArt.h"
#include "SongAct.h"
#include "AcrobaticAct.h"


class TalentShow
{
    public:
        TalentShow(std::string program, int intensityArr []);
        virtual ~TalentShow();
        int itsShowtime();
        std::vector<AbstractAct*> program;

    protected:

    private:
};

#endif // TALENTSHOW_H
