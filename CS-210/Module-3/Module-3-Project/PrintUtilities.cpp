#include<iostream>
#include<iomanip>

using namespace std;

#include "PrintUtilities.h";

void DisplayOptions() {

	// set formatting to fill with stars, width will be 40 units
	cout << setw(40) << setfill('*') << "" << endl;

	// filler
	cout << "*" << setw(38) << setfill(' ') << "" << "*" << endl;

	// hour input
	cout << "*" << setw(10) << setfill(' ') << "" << "1 - Add One Hour ";
	cout << setw(11) << setfill(' ') << "" << "*" << endl;

	// filler
	cout << "*" << setw(38) << setfill(' ') << "" << "*" << endl;

	// minute input
	cout << "*" << setw(10) << setfill(' ') << "" << "2 - Add One Minute ";
	cout << setw(9) << setfill(' ') << "" << "*" << endl;

	// filler
	cout << "*" << setw(38) << setfill(' ') << "" << "*" << endl;

	// second input
	cout << "*" << setw(10) << setfill(' ') << "" << "3 - Add One Second ";
	cout << setw(9) << setfill(' ') << "" << "*" << endl;

	// filler 
	cout << "*" << setw(38) << setfill(' ') << "" << "*" << endl;

	// exit code
	cout << "*" << setw(10) << setfill(' ') << "" << "4 - Exit Program ";
	cout << setw(11) << setfill(' ') << "" << "*" << endl;

	// filler 
	cout << "*" << setw(38) << setfill(' ') << "" << "*" << endl;

	// end star block
	cout << setw(40) << setfill('*') << "" << endl;

}