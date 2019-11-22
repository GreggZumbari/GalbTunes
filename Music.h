#ifndef MUSIC_H
#define MUSIC_H

class Music {

  char* title;
  char* artist;
  char* year;
  char* duration;
  char* pub;

  Music(char* title, char* artist, char* year, char* duration, char* pub);
  int getType();
  
};

#endif
