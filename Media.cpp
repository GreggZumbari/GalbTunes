#include <iostream>

#include "Media.h"

using namespace std;

Media::Media() {
  //Constructor, empty for now
}

Music Media::newMusic() {
  char* title;
  char* artist;
  char* year;
  char* duration;
  char* pub;

  cout << "Song title: ";
  cin.getline(title, 200);
  cout << endl << "Artist name(s): ";
  cin.getline(artist, 200);
  cout << endl << "Year published: ";
  cin.getline(year, 200);
  cout << endl << "Song duration: ";
  cin.getline(duration, 50);
  cout << endl << "Publisher name(s): ";

  return new Music(title, artist, year, duration, pub);
}

Media::add(Music m) {
  musicList.push_back(m);
}

Media::add(Movie m) {
  movieList.push_back(m);
}

Media::add(Game m) {
  steamLibrary.push_back(m);
}
