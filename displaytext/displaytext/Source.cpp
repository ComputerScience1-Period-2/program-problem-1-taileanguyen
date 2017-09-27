/*
Tailea Nguyen-9/21/17 2nd

Assignment Name: Display Text

Introdution into C++ IDE Visual Studios 2015
Create New Project and Display Text to Console
*/

// Libraries
#include <iostream> //* gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha 
#include <conio.h> //* gives access to _kbhit() for pause() 

// Namespaces 
using namespace std; //* 

					 // Functions()  
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN 
void main() { // * 
	char text_l = 'l';
	// Display Text
	cout << 'H' << 'e' << 'l' << 'l' << 'o' << " World!" << endl;
	pause(); // pauses to see the displayed text
			 // return statment closes the console and ends the program
	return;
}