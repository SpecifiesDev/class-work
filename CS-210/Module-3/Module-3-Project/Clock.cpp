/*
*	Clock.cpp
*	Date: March 19, 2024
*	Author: Dallas Gable
*	
*	This is an application to create clock functionality
*	for a project. Core function is a primary loop for user
*	input, then functionality to add time in both 24 and 12
*	hour formats. If format exceeds limit, it should loop back
*	to the start of the clock.
* 
*/

// include necessary files and c libraries
#include <iostream>
#include <vector>

// declare that we're using std so no need to use :: pointers.
using namespace std;

// import our time classes
#include "Time.h";
#include "PrintUtilities.h"

// primary program entrypoint
int main() {

	// create a bool to indicate if we are still in the input loop
	bool input = true;

	// start our 12 hour clock at exactly 11:59:59 AM
	_12HourClock _12_hour_clock(11, 59, 59);

	// start our 24 hour clock at exactly 11:59:59
	_24HourClock _24_hour_clock(11, 59, 59);

	// display the intial time
	DisplayTime(_12_hour_clock.getTime(), _24_hour_clock.getTime(), _12_hour_clock.getTimeString());

	

	// begin our input loop
	while (input) {

		DisplayOptions();

		// get user input to determine action to take
		int userInput;
		cin >> userInput;

		// use a switch to determine what t odo
		switch (userInput) {

			// add an hour to both clocks and display, make sure to break
			case 1:

				_12_hour_clock.addHour();
				_24_hour_clock.addHour();
				DisplayTime(_12_hour_clock.getTime(), _24_hour_clock.getTime(), _12_hour_clock.getTimeString());
				break;
			
			// add a minute to both clocks and display
			case 2:

				_12_hour_clock.addMinute();
				_24_hour_clock.addMinute();
				DisplayTime(_12_hour_clock.getTime(), _24_hour_clock.getTime(), _12_hour_clock.getTimeString());
				break;

			// add a second to both clocks and display
			case 3:

				_12_hour_clock.addSecond();
				_24_hour_clock.addSecond();
				DisplayTime(_12_hour_clock.getTime(), _24_hour_clock.getTime(), _12_hour_clock.getTimeString());
				break;

			// output exit message, set bool to false so loop breaks.
			case 4:
				cout << "Ending input process." << endl;
				input = false;
				break;

			// default input if value is not 1, 2, 3, or 4.
			default:
				cout << "Invalid input. Try again.";
				break;

		}


	}



	return 0;
}


