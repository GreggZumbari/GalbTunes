#include <iostream>

#include "Music.h"

using namespace std;

Music::Music(char* title, char* artist, char* year, char* duration, char* pub) {
  this->title = title;
  this->artist = artist;
  this->year = year;
  this->duration = duration;
  this->pub = pub;
}

int Music::getType() {
  return 0;
}
