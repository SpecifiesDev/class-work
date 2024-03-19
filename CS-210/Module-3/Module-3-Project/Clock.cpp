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

void DisplayTime(const vector<int>& _12HourClock, const vector<int>& _24HourClock) {

}

// primary program entrypoint
int main() {

	// create a bool to indicate if we are still in the input loop
	bool input = true;

	// start our 12 hour clock at exactly 11:59:59 AM
	_12HourClock _12_hour_clock(11, 59, 59);

	// start our 24 hour clock at exactly 23:59:59
	_24HourClock _24_hour_clock(23, 59, 59);

	// display the intial time
	//DisplayTime(_12_hour_clock.getTime(), _24_hour_clock.getTime());

	// begin our input loop
	while (input) {

		DisplayOptions();

		input = false;
	}



	return 0;
}


