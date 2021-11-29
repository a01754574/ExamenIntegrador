#include "song.h"
#include <string>
#include <iostream>

using namespace std;

Song::Song() {};
Song::Song(string title, string artist, int rating): title(title), artist(artist),
rating(5) {};

void Song::setRating(int rating_) {
    rating = rating_;

    if(rating < 5) {
        rating = rating_;
    } else {
        this->rating = rating_
    }

}