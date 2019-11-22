#ifndef MEDIA_H
#define MEDIA_H

#include <vector>

#include "Music.h"
#include "Movie.h"
#include "Game.h"

class Media {
 public:
  vector<Music> musicList;
  vector<Movie> movieList;
  vector<Game> steamLibrary;

  Media();
  Music newMusic();
  add(Music m);
  add(Movie m);
  add(Game m);
}

#endif
