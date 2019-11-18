#include <iostream>

using namespace std;

class Game {
public:
  char* title;
  char* year;
  char* pub;
  char* rating;

  Game(char* title, char* year, char* pub, char* rating) {
    this.title = title;
    this.year = year;
    this.pub = pub;
    this.rating = rating;
  }

  int getType();

private:
  int type = 2;
};

int Game::getType() {
  return type;
}
