
/*
*	Time.cpp
*	Date: March 19, 2024
*	Author: Dallas Gable
*	
*	This file defines the linking functions to _12HourClock & _24HourClock, which inherent
*	and override methods from Time.
*
*/

// include our standard c libs needs
#include<iostream>
#include<vector>
#include<string>

// using namespace standard
using namespace std;

// include time header so that we can link the overridden functions to the class declarations
#include "Time.h";

// returns true if a digit is > 10 and false if not.
bool IsTwoDigit(int digit) {
	return digit > 9 ? true : false;
}

// returns A M if enum is set to AM, P M otherwise
string _12HourClock::getTimeString() {
	return ampm == AM ? "A M" : "P M";
}

// method to add an hour to 12 hour clock
void _12HourClock::addHour() {

	// this is the 12 hour clock. if the hour is 12 we should cycle hour back
	if (hours == 12) {

		// set hours to 1
		hours = 1;

	}
	
	// check if next hour is going to be noon / am, and switch accordingly.
	else if (hours + 1 == 12) {

		ampm = ampm == AM ? PM : AM;
		hours += 1;

	}
	// otherwise, increment by 1.
	else {

		hours += 1;

	}

}


// method to add a minute to 12 hour clock
void _12HourClock::addMinute() {

	// if we are at 59 minutes, cycle back to 0 and add an hour.
	if (minutes == 59) {

		minutes = 0;
		addHour();

	}
	// otherwise, increment by 1.
	else {

		minutes += 1;

	}

}

// method to add a second to 12 hour clock
void _12HourClock::addSecond() {

	// if we are at 59 seconds, cycle back to 0 and add a minute.
	if (seconds == 59) {

		seconds = 0;
		addMinute();

	}
	// otherwise, increment by 1
	else {

		seconds += 1;

	}

}

// method to get the time in a string vector, allowing us to print it on the main screen
// without needing direct access to internal variables. we use conditionals to convert
// single digit numbers into their properly formated HH:MM:SS format.
vector<string> _12HourClock::getTime() {

	// return a vector of our time. ordered seconds, minutes, hours.

	return vector<string> { 
		// taking the inputted time and returning digit if is greater than 9
		// if not, appending a zero to match time formatting.
		IsTwoDigit(seconds) == true ? to_string(seconds) : "0" + to_string(seconds),
		IsTwoDigit(minutes) == true ? to_string(minutes) : "0" + to_string(minutes),
		IsTwoDigit(hours) == true ? to_string(hours) : "0" + to_string(hours)
	
	};

}

void _24HourClock::addHour() {

	// if hours is 23 we just cycle back to 0.
	if (hours == 23) {
		
		hours = 0;

	}
	// otherwise, increment by 1.
	else {

		hours += 1;

	}

}

void _24HourClock::addMinute() {

	// if minutes is 59, cycle back to zero and add to hours.
	if (minutes == 59) {

		minutes = 0;
		addHour();

	} 
	// otherwise, increment by 1.
	else {

		minutes += 1;

	}

}

void _24HourClock::addSecond() {

	// if seconds is 59, cycle back to zero and add to minutes.
	if (seconds == 59) {

		seconds = 0;
		addMinute();

	} 
	// otherwise, increment by 1.
	else {

		seconds += 1;

	}

}


vector<string> _24HourClock::getTime() {

	return vector<string> {

		IsTwoDigit(seconds) == true ? to_string(seconds) : "0" + to_string(seconds),
		IsTwoDigit(minutes) == true ? to_string(minutes) : "0" + to_string(minutes),
		IsTwoDigit(hours) == true ? to_string(hours) : "0" + to_string(hours)

	};

}




