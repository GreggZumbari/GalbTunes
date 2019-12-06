/*
 * The header file for the Music object. 
 * Holds the details of a single music, including title, artist, year, duration, and publisher.
 * See Media.h for more details.
 */
#ifndef MUSIC_H
#define MUSIC_H

#include <vector>

class Music {
 public:
  Music();
  ~Music();
  void setFields(char* title, char* artist, char* year, char* duration, char* pub);
  char* getTitle();
  char* getArtist();
  char* getYear();
  char* getDuration();
  char* getPublisher();
  int getType();

 private:
  char* title;
  char* artist;
  char* year;
  char* duration;
  char* pub;
};

#endif
