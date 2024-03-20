
#include<iostream>
#include<vector>
using namespace std;

#include "Time.h";

string _12HourClock::getTimeString() {
	return ampm == AM ? "A M" : "P M";
}

void _12HourClock::addHour() {

	// this is the 12 hour clock. if the hour is 12 we should cycle hour back and switch the 
	// time declarator
	if (hours == 12) {

		// set hours to 0;
		hours = 0;

		// use a conditional to set ampm to the opposite of what it currently is.
		// shorthand for if AM set to pm, else set to AM.
		ampm = ampm == AM ? PM : AM;

	}
	// otherwise, increment by 1.
	else {

		hours += 1;

	}

}



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

vector<int> _12HourClock::getTime() {

	// return a vector of our time. ordered seconds, minutes, hours.

	return vector<int> { seconds, minutes, hours };

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

vector<int> _24HourClock::getTime() {

	// return vector of the values. same order as 12hourclock.
	return vector<int> { seconds, minutes, hours };

}




