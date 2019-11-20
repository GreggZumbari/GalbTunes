#ifndef GAME_H
#define GAME_H

class Game {
 public:
  char* title, year, pub, rating;

  Game(char* title, char* year, char* pub, char* rating) {
    this->title = title;
    this->year = year;
    this->pub = pub;
    this->rating = rating;
  }
  
  int getType();
  
};

#endif
