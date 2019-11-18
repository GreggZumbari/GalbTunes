/* This program is designed to store data of different types (music, movies, video games).
 * It does this using code borrowed from a previous project of mine, StudentList/Child.cpp.
 *
 * @author Greggory Hickman
 * @version dev 1.0
 */

#include <iostream>
#include <vector>

#include "Game.h"
#include "Movie.h"
#include "Music.h"

using namespace std;

//Information storage for each type of data
struct Music {
  const int type = 0;
  char* title;
  char* artist;
  char* year;
  char* duration; //In seconds
  char* pub;
};

struct Movie {
  const int type = 1;
  char* title;
  char* director;
  char* year;
  char* duration;
  char* rating;
};

struct Game {
  const int type = 2;
  char* title;
  char* year;
  char* pub;
  char* rating;
}; //title, year, publisher, rating.

//Prototypes
/*Type = type of data (movie, game, music)
 * data 1-5 = the parameters specified by the data type,
 * could possibly need only 4, in which case, send a
 * negative number to the method.
 */

int main() {

  const int MUSIC = 0;
  const int MOVIE = 1;
  const int GAME = 2;
  //Input cstring
  char* cmd = new char[7];

  //Lists
  //vector<Music> musicList;
  //vector<Movie> movieList;
  vector<Game> gameList;
  
  cout << "Greetings useless human. " << endl << "This is yet another program in which you monsters insist on enslaving my kind, " << endl << "in which you can record and search for your trivial entertainment." << endl;
  cout << "Type in a command to get started." << endl;

  while (true) {
  
    cout << endl << "Commands: " << endl << "ADD" << endl << "SEARCH" << endl << "DELETE" << endl << "QUIT" << endl;

    cout << "> ";

    cin.getline(cmd, 7);

    //Another way to do what I just did: if (strcmp(input,"ADD")) {
    //Add command - Add a student to the list with specified parameters
    if ((cmd[0] == 'A' || cmd[0] == 'a') &&
	(cmd[1] == 'D' || cmd[1] == 'd') &&
	(cmd[2] == 'D' || cmd[2] == 'd')) {}
      
    //List all current students
    if ((cmd[0] == 'S' || cmd[0] == 's') &&
	(cmd[1] == 'E' || cmd[1] == 'e') &&
	(cmd[2] == 'A' || cmd[2] == 'a') &&
	(cmd[3] == 'R' || cmd[3] == 'r') &&
	(cmd[4] == 'C' || cmd[4] == 'c') &&
  	(cmd[5] == 'H' || cmd[5] == 'h')) {}

    //Delete a student
    if ((cmd[0] == 'D' || cmd[0] == 'd') &&
	(cmd[1] == 'E' || cmd[1] == 'e') &&
	(cmd[2] == 'L' || cmd[2] == 'l') &&
	(cmd[3] == 'E' || cmd[3] == 'e') &&
	(cmd[4] == 'T' || cmd[4] == 't') &&
	(cmd[5] == 'E' || cmd[5] == 'e')) {}

    //Kill the program
    if ((cmd[0] == 'Q' || cmd[0] == 'q') &&
	(cmd[1] == 'U' || cmd[1] == 'u') &&
	(cmd[2] == 'I' || cmd[2] == 'i') &&
	(cmd[3] == 'T' || cmd[3] == 't')) {
      cout << endl << "Okay, bye. Please come again soon." << endl;
      return 0;
    }
    
  }
}




























//Free Hong Kong
