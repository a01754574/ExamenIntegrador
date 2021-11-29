#include "musicPlayer.h"
#include "song.h"
#include <iostream>

using namespace std;

int main() {

    MusicPlayer mp;
    Song s1 = Song("Run Rudolph Run", "Chuck Berry");
    Song s2 = Song("Santa Claus is Coming to Town", "Bruce Springsteen");
    Song s3 = Song("Jingle Bell Rock", "Bobby Helms");
    
    cout << "Song 1 title: " << s1.getTitle() << "\n";
    cout << "Song 2 artist: " << s2.getArtist() << "\n";
    cout << "Song 3 rating: " << s3.getRating() << "\n";
    
    s3.setRating(6);

    cout << "Song 3 rating after first update: " << s3.getRating() << "\n";
    
    s3.setRating(4);

    cout << "Song 3 rating after second update: " << s3.getRating() << "\n";
    
    mp.play(s1);
    mp.print();
    mp.pause();
    mp.print();
    mp.stop();
    mp.print();

    mp.play(s3);
    mp.print();

    return 0;
}