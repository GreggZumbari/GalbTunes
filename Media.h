/*
 * The header file for the Movie object. 
 * Holds the details of a single movie, including title, director, year, duration, and rating.
 * See Media.h for more details.
 */
#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <vector>

#include "Music.h"
#include "Movie.h"
#include "Game.h"

class Media {
 public:
  std::vector<Music> musicList;
  std::vector<Movie> movieList;
  std::vector<Game> steamLibrary;

  Media();

  Music newMusic();
  add(Music m);
  add(Movie m);
  add(Game m);
};

#endif
