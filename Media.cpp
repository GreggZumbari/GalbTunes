/*
 * The c++ file for the Media object. 
 * The Media object can hold any number of any media type, currently including Movie, Music, and Game.
 * The Media object can also be used to create a new Media of any of the above types using console prompts for the user to fill in the fields.
 */
#include <new>

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
  cin.getline(year, 50);
  cout << endl << "Song duration: ";
  cin.getline(duration, 50);
  cout << endl << "Publisher name(s): ";
  cin.getline(pub, 200);

  Music m;
  m.setFields(title, artist, year, duration, pub);

  return m;
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
