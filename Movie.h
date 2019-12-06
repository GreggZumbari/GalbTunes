/*
 * The header file for the Movie object. 
 * Holds the details of a single movie, including title, director, year, duration, and rating.
 * See Media.h for more details.
 */
#ifndef MOVIE_H
#define MOVIE_H

#include <vector>

class Movie {
 public:
  Movie();
  ~Movie();
  void setFields(char* title, char* director, char* year, char* duration, char* rating);
  char* getTitle();
  char* getDirector();
  char* getYear();
  char* getDuration();
  char* getRating();
  int getType();
  
 private:
  char* title;
  char* director;
  char* year;
  char* duration;
  char* rating;
};

#endif
