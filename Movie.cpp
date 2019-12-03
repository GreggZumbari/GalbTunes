/*
 * The c++ file for the Movie object. 
 * Inputs the details of a single movie, including title, director, year, duration, and rating.
 * See Media.h for more details.
 */
#include <iostream>

#include "Movie.h"

using namespace std;

Movie::Movie() {}

void Movie::setFields(char* title, char* director, char* year, char* duration, char* rating) {
  this->title = title;
  this->director = director;
  this->year = year;
  this->duration = duration;
  this->rating = rating;
}

char* Movie::getTitle() {
  return title;
}
char* Movie::getDirector() {
  return director;
}
char* Movie::getYear() {
  return year;
}
char* Movie::getDuration() {
  return duration;
}
char* Movie::getRating() {
  return rating;
}

int Movie::getType() {
  return 1;
}
