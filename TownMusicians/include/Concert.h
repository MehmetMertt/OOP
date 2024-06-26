#ifndef CONCERT_H
#define CONCERT_H

#include <vector>
#include "IAnimalSong.h"
#include "CatSong.h"
#include "DogSong.h"
#include "RoosterSong.h"



class Concert
{
    public:
        Concert(std::string);
        ~Concert();
        int play();
        void printsong();

        Concert& operator=(const Concert& other) {
            if (this != &other) { // Schutz vor Selbstzuweisung
                // Zuerst alle bestehenden Ressourcen freigeben
                for (auto& song : songs) {
                    delete song;
                }
                songs.clear();

                // Jetzt die Songs von 'other' kopieren
                for (auto& song : other.songs) {
                    if (dynamic_cast<CatSong*>(song)) {
                        songs.push_back(new CatSong());
                    } else if (dynamic_cast<DogSong*>(song)) {
                        songs.push_back(new DogSong());
                    } else if (dynamic_cast<RoosterSong*>(song)) {
                        songs.push_back(new RoosterSong());
                    } else {
                        // Handle other types of songs if needed
                    }
                }
            }
        std::cout << "Custom assignment operator called" << std::endl;
        return *this;
    }


    protected:

    private:
        std::vector<IAnimalSong*> songs;
};

#endif // CONCERT_H
