/*
 * The header file for the Movie object. 
 * Holds the details of a single movie, including title, director, year, duration, and rating.
 * See Media.h for more details.
 */
#ifndef MEDIA_H
#define MEDIA_H

#include <vector>

#include "Music.h"
#include "Movie.h"
#include "Game.h"

using namespace std;

class Media {
	
 public:
  Media();

  Music newMusic();
  Movie newMovie();
  Game newGame();
  vector<Music> getMusicList();
  vector<Movie> getMovieList();
  vector<Game> getGameList();
  void kill(int type, int address);
  void add(Music m);
  void add(Movie m);
  void add(Game m);
  
 private:
  vector<Music> musicList;
  vector<Movie> movieList;
  vector<Game> steamLibrary;

};

#endif
