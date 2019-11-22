#ifndef MOVIE_H
#define MOVIE_H

class Movie {

 public:
  char* title;
  char* director;
  char* year;
  char* duration;
  char* rating;

  Movie(char* title, char* director, char* year, char* duration, char* rating);
  int getType();
  
};

#endif
