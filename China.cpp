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

Media search(Media media, int setting);

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
      cin >> cmd; cin.clear(); cin.ignore(100, '\n');

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
      media = search(media, 0);
    }

    //Delete a media
    else if ((cmd[0] == 'D' || cmd[0] == 'd') &&
	(cmd[1] == 'E' || cmd[1] == 'e') &&
	(cmd[2] == 'L' || cmd[2] == 'l') &&
	(cmd[3] == 'E' || cmd[3] == 'e') &&
	(cmd[4] == 'T' || cmd[4] == 't') &&
	(cmd[5] == 'E' || cmd[5] == 'e')) {
      media = search(media, 1);
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

Media search(Media media, int setting) {
  char* cmd = new char[100];
  char* res = new char[100];
  //These are here to prevent me from having to do math later
  int iter = 0;
  int iter2 = 0;
  //Number of results found
  int rsCount = 0;
  //These are just here to make my code more readable
  const int SEARCH = 0;
  const int DELETE = 1;

  //Copies of every media list
  vector<Music> a = media.getMusicList();
  vector<Movie> b = media.getMovieList();
  vector<Game> c = media.getGameList();

  //If the user is trying to delete things, these will store the locations of the objects to delete
  int* typeList = new int[100];
  int* addList = new int[100];
  cout << "Should I search by the title, or the year? (Title, Year): ";
  cin >> cmd; cin.clear(); cin.ignore(100, '\n'); //The holy trinity, credit to Steph for showing me how to do this
  cout << endl;

  //Sort by title
  if ((cmd[0] == 'T' || cmd[0] == 't') &&
      (cmd[1] == 'I' || cmd[1] == 'i') &&
      (cmd[2] == 'T' || cmd[2] == 't') &&
      (cmd[3] == 'L' || cmd[3] == 'l') &&
      (cmd[4] == 'E' || cmd[4] == 'e')) {
    if (setting == SEARCH)
      cout << "Title of media to search: ";
    else
      cout << "Title of media to delete: ";
      
	cin.getline(cmd, 100);
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
	      cout << "Year released: " << a[i].getYear() << endl;
	      cout << "Duration: " << a[i].getDuration() << endl;
	      cout << "Publisher: " << a[i].getPublisher() << endl << endl;
	      rsCount++;

	      //Deleting all recorded addresses for search results
  	      if (setting == DELETE) {
    	        cout << "Are you sure you want to delete this? (y/n)" << endl;
    	        cin >> res; cin.clear(); cin.ignore(10000, '\n');

                if (res[0] == 'Y' || res[0] == 'y') {
                  cout << "Song " << a[i].getTitle() << " deleted." << endl;
		  media.kill(0, i);
		  return media;
                }
              }
	    }
	  }
	  //Movie List
	  if (i < b.size()) {
	    if (strcmp(b[i].getTitle(), cmd) == 0) {

	      cout << "Result #" << ++iter << " - " << endl;
	      cout << "Type: Movie" << endl;
	      cout << "Title: " << b[i].getTitle() << endl;
	      cout << "Director: " << b[i].getDirector() << endl;
	      cout << "Year released: " << b[i].getYear() << endl;
	      cout << "Duration: " << b[i].getDuration() << endl;
	      cout << "Rating: " << b[i].getRating() << endl << endl;
	      rsCount++;

              //Deleting all recorded addresses for search results
  	      if (setting == DELETE) {
    	        cout << "Are you sure you want to delete this? (y/n)" << endl;
    	        cin >> res; cin.clear(); cin.ignore(10000, '\n');

                if (res[0] == 'Y' || res[0] == 'y') {
                  cout << "Movie " << b[i].getTitle() << " deleted." << endl;
		  media.kill(1, i);
		  return media;
                }
              }
	    }
	  }
	  //Game List
	  if (i < c.size()) {
	    if (strcmp(c[i].getTitle(), cmd) == 0) {

	      cout << "Result #" << ++iter << " - " << endl;
	      cout << "Type: Game" << endl;
	      cout << "Title: " << c[i].getTitle() << endl;
	      cout << "Year released: " << c[i].getYear() << endl;
	      cout << "Publisher: " << c[i].getPublisher() << endl;
	      cout << "Rating: " << c[i].getRating() << endl << endl;
	      rsCount++;

	      //Deleting all recorded addresses for search results
  	      if (setting == DELETE) {
    	        cout << "Are you sure you want to delete this? (y/n)" << endl;
    	        cin >> res; cin.clear(); cin.ignore(10000, '\n');

                if (res[0] == 'Y' || res[0] == 'y') {
                  cout << "Game " << c[i].getTitle() << " deleted." << endl;
		  media.kill(2, i);
		  return media;
                }
              }
	    }
	  }
	}
  }
  
  //Sort by year
  else if ((cmd[0] == 'Y' || cmd[0] == 'y') &&
   	   (cmd[1] == 'E' || cmd[1] == 'e') &&	
	   (cmd[2] == 'A' || cmd[2] == 'a') &&
	   (cmd[3] == 'R' || cmd[3] == 'r')) {
    cout << "Year title (this is the part where you type in the year): ";
    cin.getline(cmd, 100);
    cout << endl;

    //Comb through the media libraries for anything matching the title specified by the user
    for (int i = 0; i < (a.size() + b.size() + c.size()); i++) {
      //Music List
      if (i < a.size()) {
	if (strcmp(a[i].getYear(), cmd) == 0) {
		
	  //Oh look, a matching search
	  cout << "Result #" << ++iter << " - " << endl;
	  cout << "Type: Music" << endl;
	  cout << "Title: " << a[i].getTitle() << endl;
	  cout << "Artist: " << a[i].getArtist() << endl;
	  cout << "Year created: " << a[i].getYear() << endl;
	  cout << "Duration: " << a[i].getDuration() << endl;
	  cout << "Publisher: " << a[i].getPublisher() << endl << endl;
	  rsCount++;

	  //Deleting all recorded addresses for search results
  	  if (setting == DELETE) {
    	    cout << "Are you sure you want to delete this? (y/n)" << endl;
    	    cin >> res; cin.clear(); cin.ignore(10000, '\n');

            if (res[0] == 'Y' || res[0] == 'y') {
              cout << "Song " << a[i].getTitle() << " deleted." << endl;
	      media.kill(0, i);
	      return media;
            }
          }
	}
      }
      //Movie List
      if (i < b.size()) {
	if (strcmp(b[i].getYear(), cmd) == 0) {
		
	  cout << "Result #" << ++iter << " - " << endl;
	  cout << "Type: Movie" << endl;
	  cout << "Title: " << b[i].getTitle() << endl;
	  cout << "Director: " << b[i].getDirector() << endl;
	  cout << "Year created: " << b[i].getYear() << endl;
	  cout << "Duration: " << b[i].getDuration() << endl;
	  cout << "Rating: " << b[i].getRating() << endl << endl;
	  rsCount++;

	  //Deleting all recorded addresses for search results
  	  if (setting == DELETE) {
    	    cout << "Are you sure you want to delete this? (y/n)" << endl;
    	    cin >> res; cin.clear(); cin.ignore(10000, '\n');

            if (res[0] == 'Y' || res[0] == 'y') {
              cout << "Movie " << c[i].getTitle() << " deleted." << endl;
	      media.kill(1, i);
	      return media;
            }
          }
	}
      }
      //Game List
      if (i < c.size()) {
	if (strcmp(c[i].getYear(), cmd) == 0) {
		
	  cout << "Result #" << ++iter << " - " << endl;
	  cout << "Type: Game" << endl;
	  cout << "Title: " << c[i].getTitle() << endl;
	  cout << "Year: " << c[i].getYear() << endl;
	  cout << "Publisher: " << c[i].getPublisher() << endl;
	  cout << "Rating: " << c[i].getRating() << endl << endl;
	  rsCount++;

	  //Deleting all recorded addresses for search results
  	  if (setting == DELETE) {
    	    cout << "Are you sure you want to delete this? (y/n)" << endl;
    	    cin >> res; cin.clear(); cin.ignore(10000, '\n');

            if (res[0] == 'Y' || res[0] == 'y') {
              cout << "Game " << c[i].getTitle() << " deleted." << endl;
	      media.kill(2, i);
            }
	    return media;
          }
	}
      }
    }
  }
  else {
    cout << "SEARCH FIELD NOT RECOGNIZED" << endl;
    rsCount = -1;
  }
  if (rsCount == 0) {
    cout << "NO RESULTS FOUND" << endl;
  }
  return media;
}














































































//Free Hong Kong
