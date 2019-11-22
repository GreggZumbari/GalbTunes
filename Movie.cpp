#include <iostream>

#include "Movie.h"

using namespace std;

Movie::Movie(char* title, char* director, char* year, char* duration, char* rating) {
  this->title = title;
  this->director = director;
  this->year = year;
  this->duration = duration;
  this->rating = rating;
}

int Movie::getType() {
  return 1;
}
