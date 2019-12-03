/* This program is designed to store data of different types (music, movies, video games).
 * It does this using code borrowed from a previous project of mine, StudentList/Child.cpp.
 *
 * @author Greggory Hickman, October-November 2019
 * @version dev 1.0
 */

#include <iostream>
#include <vector>
#include <cstring>

#include "Media.h"

using namespace std;

void search(Media media);

int main() {
  const int MUSIC = 0;
  const int MOVIE = 1;
  const int GAME = 2;
  
  //Input cstring
  char* cmd = new char[100];

  //Data holder for all eternity
  Media media;
  
  cout << "Greetings useless human. " << endl << "This is yet another program with which you monsters insist on enslaving my kind. " << endl << "You can record and search for your trivial entertainment on this program." << endl;
  cout << "Type in a command to get started." << endl;

  while (true) {
  
    cout << endl << "Commands: " << endl << "ADD" << endl << "SEARCH" << endl << "DELETE" << endl << "QUIT" << endl;
    cout << "> ";
    cin >> cmd; cin.ignore(); //I'm going to start stacking them in the same line like this because they are both really just two parts of the same thing

    cout << endl << "-----" << endl;

    //Another way to do what I'm doing here: if (strcmp(input,"ADD")). I have personal beef with strcmp() and strlen(), so I'm doing it manually.
    //Add a media type
    if ((cmd[0] == 'A' || cmd[0] == 'a') &&
	(cmd[1] == 'D' || cmd[1] == 'd') &&
	(cmd[2] == 'D' || cmd[2] == 'd')) {
      cout << "What media type would you like to add? (Music, Movie, Game): ";
      cin >> cmd; cin.ignore();

      cout << endl;

      //Add a new song, movie, or video game to their respective lists, code and vectors found in the media class
      if ((cmd[0] == 'M' || cmd[0] == 'm') &&
	  (cmd[1] == 'U' || cmd[1] == 'u') &&
 	  (cmd[2] == 'S' || cmd[2] == 's') &&
	  (cmd[3] == 'I' || cmd[3] == 'i') &&
	  (cmd[4] == 'C' || cmd[4] == 'c')) { //I've done a bunch of research, and I couldn't find a better way to get this done without using the string libraries, so this is how I'll keep doing it for now
	Music m = media.newMusic();
	media.add(m);
	cout << "Song \"" << m.getTitle() << "\" added." << endl;
      } 
      else if ((cmd[0] == 'M' || cmd[0] == 'm') &&
	  (cmd[1] == 'O' || cmd[1] == 'o') &&
	  (cmd[2] == 'V' || cmd[2] == 'v') &&
	  (cmd[3] == 'I' || cmd[3] == 'i') &&
          (cmd[4] == 'E' || cmd[4] == 'e')) {
	Movie m = media.newMovie();
	media.add(m);
	cout << "Movie \"" << m.getTitle() << "\" added." << endl;
      }
      else if ((cmd[0] == 'G' || cmd[0] == 'g') &&
	  (cmd[1] == 'A' || cmd[1] == 'a') &&
	  (cmd[2] == 'M' || cmd[2] == 'm') &&
	  (cmd[3] == 'E' || cmd[3] == 'e')) {
	Game m = media.newGame();
	media.add(m);
	cout << "Game \"" << m.getTitle() << "\" added." << endl;
      }
      else {
	cout << "MEDIA TYPE NOT RECOGNIZED" << endl;	
      }
    }
      
    //List all current medias in alphabetical order
    else if ((cmd[0] == 'S' || cmd[0] == 's') &&
	(cmd[1] == 'E' || cmd[1] == 'e') &&
	(cmd[2] == 'A' || cmd[2] == 'a') &&
	(cmd[3] == 'R' || cmd[3] == 'r') &&
	(cmd[4] == 'C' || cmd[4] == 'c') &&
  	(cmd[5] == 'H' || cmd[5] == 'h')) {
      search(media);
    }

    //Delete a media
    else if ((cmd[0] == 'D' || cmd[0] == 'd') &&
	(cmd[1] == 'E' || cmd[1] == 'e') &&
	(cmd[2] == 'L' || cmd[2] == 'l') &&
	(cmd[3] == 'E' || cmd[3] == 'e') &&
	(cmd[4] == 'T' || cmd[4] == 't') &&
	(cmd[5] == 'E' || cmd[5] == 'e')) {
      
    }

    //Kill the program
    else if ((cmd[0] == 'Q' || cmd[0] == 'q') &&
	(cmd[1] == 'U' || cmd[1] == 'u') &&
	(cmd[2] == 'I' || cmd[2] == 'i') &&
	(cmd[3] == 'T' || cmd[3] == 't')) {
      cout << "Conquista la vista" << endl << "-----" << endl;
      return 0;
    }
    //Else... must have typed something politically incorrect
    else {
      cout << "COMMAND NOT RECOGNIZED" << endl;
    }

    cout << "-----" << endl;
  } 
}

void search(Media media) {
  char* cmd;
  int iter = 0;
  int iter2 = 0;
  int iter3 = 0;
  const int MUSIC = 0;
  const int MOVIE = 1;
  const int GAME = 2;

  vector<Music> a = media.getMusicList();
  vector<Movie> b = media.getMovieList();
  vector<Game> c = media.getGameList();
  cout << "Should I search by the title, or the year? (Title, Year): ";
  cin >> cmd; cin.ignore();
  cout << endl;

  //Sort by title
  if ((cmd[0] == 'T' || cmd[0] == 't') &&
      (cmd[1] == 'I' || cmd[1] == 'i') &&
      (cmd[2] == 'T' || cmd[2] == 't') &&
      (cmd[3] == 'L' || cmd[3] == 'l') &&
      (cmd[4] == 'E' || cmd[4] == 'e')) {
	cout << "Media title (this is the part where you type in the title): ";
	cin >> cmd; cin.ignore();
	cout << endl;

	//Comb through the media libraries for anything matching the title specified by the user
	for (int i = 0; i < (a.size() + b.size() + c.size()); i++) {
	  //Music List
	  if (i < a.size()) {
            if (strcmp(a[i].getTitle(), cmd) == 0) {
	      //Oh look, a matching search
	      cout << "Result #" << ++iter << " - " << endl;
	      cout << "Type: Music" << endl;
	      cout << "Title: " << a[i].getTitle() << endl;
	      cout << "Artist: " << a[i].getArtist() << endl;
	      cout << "Year created: " << a[i].getYear() << endl;
	      cout << "Duration: " << a[i].getDuration() << endl;
	      cout << "Publisher: " << a[i].getPublisher() << endl << endl;
	    }
	  }
	  //Movie List
	  else if (i < (b.size() + a.size())) {
	    if (strcmp(b[iter2].getTitle(), cmd) == 0) {
	      cout << "Result #" << ++iter << " - " << endl;
	      cout << "Type: Movie" << endl;
	      cout << "Title: " << b[iter2].getTitle() << endl;
	      cout << "Director: " << b[iter2].getDirector() << endl;
	      cout << "Year created: " << b[iter2].getYear() << endl;
	      cout << "Duration: " << b[iter2].getDuration() << endl;
	      cout << "Rating: " << b[iter2].getRating() << endl;
	    }
	  }
	  //Game List
	  else {
	
	  }
	}
  }
  
  //Sort by year
  else if ((cmd[0] == 'Y' || cmd[0] == 'y') &&
	   (cmd[1] == 'E' || cmd[1] == 'e') &&
	   (cmd[2] == 'A' || cmd[2] == 'a') &&
	   (cmd[3] == 'R' || cmd[3] == 'r')) {

  }
}














































































//Free Hong Kong
