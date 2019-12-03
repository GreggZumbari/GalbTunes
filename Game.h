/*
 * The header file for the Game object. 
 * Inputs the details of a single game, including title, year, publisher, and rating.
 * See Media.h for more details.
 */
#ifndef GAME_H
#define GAME_H

#include <vector>

class Game {
 public:
  Game();
  void setFields(char* title, char* year, char* pub, char* rating);
  char* getTitle();
  char* getYear();
  char* getPublisher();
  char* getRating();
  int getType();

 private:
  char* title;
  char* year;
  char* pub;
  char* rating;
};

#endif
