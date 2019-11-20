#ifndef MOVIE_H
#define MOVIE_H

class Movie {

 public:
  char* title, director, year, duration, rating;

  Movie(char* title, char* director, char* year, char* duration, char* rating) {
    this->title = title;
    this->director = director;
    this->year = year;
    this->duration = duration;
    this->rating = rating;
  }

  int getType();
  
};

#endif
