/*
*	PrintUtilities.cpp
*	Date: March 19, 2024
*	Author: Dallas Gable
*
*   This file is designed to contain print functions for our main function, taking the long code blocks out of main.
*	currently prints options for the program, as well as formatted time.
*
*/

// include necessary c libs
#include<iostream>
#include<iomanip>
#include<vector>

// using standard namespace
using namespace std;

// include our header file to link the functions when calling from another file
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

void DisplayTime(const vector<string>& _12HourClock, const vector<string>& _24HourClock, string timeString) {

	// fill the top brackets for the two time displays
	cout << setw(30) << setfill('*') << "" << "  " << setw(30) << setfill('*') << "" << endl;

	// fill and set our headers for the time displays
	cout << '*' << setw(7) << setfill(' ') << "" << "12-Hour Clock" << setw(8) << setfill(' ') << "" << '*' << "  ";
	cout << '*' << setw(7) << setfill(' ') << "" << "24-Hour Clock" << setw(8) << setfill(' ') << "" << '*' << endl;

	// create a space between header and time, append stars to end of each block
	cout << "*" << setw(28) << setfill(' ') << "" << "*" << "  ";
	cout << "*" << setw(28) << setfill(' ') << "" << "*" << endl;

	// display our inputted 12 hour time
	cout << "*" << setw(7) << setfill(' ') << "" << _12HourClock.at(2) << ":" << _12HourClock.at(1) << ":" << _12HourClock.at(0) << " " << timeString << setw(9) << setfill(' ') << "";
	cout << "*" << "  ";

	// display our inputted 24 hour time
	cout << "*" << setw(9) << setfill(' ') << "" << _24HourClock.at(2) << ":" << _24HourClock.at(1) << ":" << _24HourClock.at(0) << " " << setw(10) << setfill(' ') << " " << "*" << endl;

	// fill the bottom brackets for the display
	cout << setw(30) << setfill('*') << "" << "  " << setw(30) << setfill('*') << "" << endl;

	// skip a few lines for cleaner formatting.
	cout << "\n" << endl;
}