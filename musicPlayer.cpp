#include "song.h"
#include "musicPlayer.h"
#include <string>
#include <iostream>

using namespace std;

void MusicPlayer::play(Song newSong) {
    playing = newSong;
}

void MusicPlayer::pause()  {
    if (state == 'y') {state = 'p'; }
    else if (state == 'p') {state = 'y';}
    else {state = 'y';}
}

void MusicPlayer::stop() {
    state = 's';
}

void MusicPlayer::print() {
    if (state == 's')  {
        puts("Nothing playing");
    } else if (state == 'p') {
        puts("On hold");
    } else {
        printf("Playing: %s\n", playing.getTitle().c_str());
    }
}



