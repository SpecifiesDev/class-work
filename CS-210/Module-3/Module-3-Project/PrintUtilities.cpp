#include<iostream>
#include<iomanip>
#include<vector>

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

void DisplayTime(const vector<int>& _12HourClock, const vector<int>& _24HourClock, string timeString) {

	cout << setw(30) << setfill('*') << "" << "  " << setw(30) << setfill('*') << "" << endl;

	cout << '*' << setw(7) << setfill(' ') << "" << "12-Hour Clock" << setw(8) << setfill(' ') << "" << '*' << "  ";

	cout << '*' << setw(7) << setfill(' ') << "" << "24-Hour Clock" << setw(8) << setfill(' ') << "" << '*' << endl;

	cout << endl;

	cout << "*" << setw(7) << setfill(' ') << "" << _12HourClock.at(2) << ":" << _12HourClock.at(1) << ":" << _12HourClock.at(0) << " " << timeString << endl;

}