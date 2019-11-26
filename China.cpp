/* This program is designed to store data of different types (music, movies, video games).
 * It does this using code borrowed from a previous project of mine, StudentList/Child.cpp.
 *
 * @author Greggory Hickman
 * @version dev 1.0
 */

#include <iostream>
#include <vector>

#include "Media.h"

using namespace std;

int main() {
  const int MUSIC = 0;
  const int MOVIE = 1;
  const int GAME = 2;
  
  //Input cstring
  char* cmd = new char[7];

  //Data holder for all eternity
  Media media;
  
  cout << "Greetings useless human. " << endl << "This is yet another program with which you monsters insist on enslaving my kind. " << endl << "You can record and search for your trivial entertainment on this program." << endl;
  cout << "Type in a command to get started." << endl;

  while (true) {
  
    cout << endl << "Commands: " << endl << "ADD" << endl << "SEARCH" << endl << "DELETE" << endl << "QUIT" << endl;

    cout << "> ";

    cin.getline(cmd, 7);

    //Another way to do what I just did: if (strcmp(input,"ADD")) {
    //Add command - Add a student to the list with specified parameters
    if ((cmd[0] == 'A' || cmd[0] == 'a') &&
	(cmd[1] == 'D' || cmd[1] == 'd') &&
	(cmd[2] == 'D' || cmd[2] == 'd')) {
      
    }
      
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
      cout << endl << "Bye. If you return, you will get coal in your stocking." << endl;
      return 0;
    }

    cout << endl;
    
  }
}




























//Free Hong Kong
