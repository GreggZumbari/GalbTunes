/*
 * The c++ file for the Music object. 
 * Inputs the details of a single music, including title, artist, year, duration, and publisher.
 * See Media.h for more details.
 */
#include <iostream>

#include "Music.h"

using namespace std;

Music::Music() {}

Music::~Music() {
  //cout << "Song " << title << " destroyed.";
}

void Music::setFields(char* title, char* artist, char* year, char* duration, char* pub) {
  this->title = title;
  this->artist = artist;
  this->year = year;
  this->duration = duration;
  this->pub = pub;
}

char* Music::getTitle() {
  return title;
}
char* Music::getArtist() {
  return artist;
}
char* Music::getYear() {
  return year;
}
char* Music::getDuration() {
  return duration;
}
char* Music::getPublisher() {
  return pub;
}
		      
int Music::getType() {
  return 0;
}
