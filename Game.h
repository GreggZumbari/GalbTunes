/*
 * The header file for the Game object. 
 * Inputs the details of a single game, including title, year, publisher, and rating.
 * See Media.h for more details.
 */
#ifndef GAME_H
#define GAME_H

#include <vector>

//I really should have done it this way:
//class Game: public Media {
//And Media should have been a parent class instead of just basically a container
//This doesn't bear well for my parenting skills later in life, I should consider not starting a family
class Game {
 public:
  Game();
  ~Game();
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
