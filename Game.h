#ifndef GAME_H
#define GAME_H

class Game {
  
 public:
  char* title;
  char* year;
  char* pub;
  char* rating;

  Game(char* title, char* year, char* pub, char* rating) {
    this->title = title;
    this->year = year;
    this->pub = pub;
  }
  
  int getType();
    
 private:
  const int type = 2;
  
};

#endif
