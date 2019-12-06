/*
 * The c++ file for the Media object. 
 * The Media object can hold any number of any media type, currently including Movie, Music, and Game.
 * The Media object can also be used to create a new Media of any of the above types using console prompts for the user to fill in the fields.
 */
#include <new>
#include <iostream>

#include "Media.h"

using namespace std;

Media::Media() {
  //Constructor, empty for now
}

//Create a new Music object, will prompt for each of the nesessary fields
Music Media::newMusic() {  
  char* title = new char[100];
  char* artist = new char[100];
  char* year = new char[100];
  char* duration = new char[100];
  char* pub = new char[100];
  
  cout << "Song title: ";
  cin.getline(title, 100);
  cout << "Artist name(s): ";
  cin.getline(artist, 100);
  cout << "Year published: ";
  cin.getline(year, 100);
  cout << "Song duration: ";
  cin.getline(duration, 100);
  cout << "Publisher name(s): ";
  cin.getline(pub, 100);

  Music m;
  m.setFields(title, artist, year, duration, pub);

  return m;
}

Movie Media::newMovie() {  
  char* title = new char[100];
  char* director = new char[100];
  char* year = new char[100];
  char* duration = new char[100];
  char* rating = new char[100];
  
  cout << "Movie title: ";
  cin.getline(title, 100);
  cout << "Director name(s): ";
  cin.getline(director, 100);
  cout << "Year published: ";
  cin.getline(year, 100);
  cout << "Movie duration: ";
  cin.getline(duration, 100);
  cout << "Movie rating: ";
  cin.getline(rating, 100);

  Movie m;
  m.setFields(title, director, year, duration, rating);

  return m;
}

Game Media::newGame() {  
  char* title = new char[100];
  char* year = new char[100];
  char* pub = new char[100];
  char* rating = new char[100];
  
  cout << "Game title: ";
  cin.getline(title, 100);
  cout << "Year published: ";
  cin.getline(year, 100);
  cout << "Publisher name(s): ";
  cin.getline(pub, 100);
  cout << "Game rating: ";
  cin.getline(rating, 100);

  Game m;
  m.setFields(title, year, pub, rating);

  return m;
}

//The following three methods return the list of that media type
vector<Music> Media::getMusicList() {
  return musicList;
}

vector<Movie> Media::getMovieList() {
  return movieList;
}

vector<Game> Media::getGameList() {
  return steamLibrary;
}

//The following methods will brutally murder any of the 3 object types that are specified
void Media::kill(int type, int address) {
  cout << type << ", " << address << endl;
  if (type = 0) { //Music
    Music m;
    musicList[address] = m;
    //musicList.erase(musicList.begin() + (address - 1));
  }
  if (type = 1) { //Movie
    movieList.erase(movieList.begin() + (address - 1));
  }
  if (type = 2) { //Game
    steamLibrary.erase(steamLibrary.begin() + (address - 1));
  }
}

//The following methods will add any of the 3 object types to their corresponding lists
void Media::add(Music m) {
  musicList.push_back(m);
}

void Media::add(Movie m) {
  movieList.push_back(m);
}

void Media::add(Game m) {
  steamLibrary.push_back(m);
}
