#ifndef GAME_H
#define GAME_H

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
