/*
 * The c++ file for the Game object. 
 * Inputs the details of a single game, including title, year, publisher, and rating.
 * See Media.h for more details.
 */
#include <iostream>

#include "Game.h"

using namespace std;

Game::Game() {}

Game::~Game() {
  //cout << "Game " << title << " destroyed." << endl;
}

void Game::setFields(char* title, char* year, char* pub, char* rating) {
  this->title = title;
  this->year = year;
  this->pub = pub;
  this->rating = rating;
}

char* Game::getTitle() {
  return title;
}
char* Game::getYear() {
  return year;
}
char* Game::getPublisher() {
  return pub;
}
char* Game::getRating() {
  return rating;
}

int Game::getType() {
  return 2;
}
