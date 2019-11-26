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
  char* title;
  char* year;
  char* pub;
  char* rating;

  Game(char* title, char* year, char* pub, char* rating);
  int getType();
  
};

#endif
