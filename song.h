#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Song {
    private:
        string title, artist;
        int rating;
    
    public:
        Song();
        Song(string title, string artist);

        string getTitle() {return title;};
        string getArtist() {return artist;};
        int getRating() {return rating;};

        void setRating(int rating);
};