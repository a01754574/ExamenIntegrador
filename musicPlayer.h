#include "song.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

class MusicPlayer {
    private:
        char state;
        Song playing;
    
    public:
        MusicPlayer(): state('s') {} ;

        void play(Song newSong);
        void pause();
        void stop();
        void print();

};
