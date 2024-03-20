#ifndef TIME_H
#define TIME_H

// it's against standard practice to use this in header files of large projects
// as it can make conventions messy, but for the purpose of this project
// it should not be an issue
using namespace std;

// include necessary c libs
#include<vector>

// abstract class time, includes all of the necessary values needed for a subclass to inherent.
// using virtual allows for polymorphism, allowing us to override children functions with different logic.
class Time {

	protected:
		int hours = 0;
		int minutes = 0;
		int seconds = 0;


		virtual void addHour() = 0;
		virtual void addMinute() = 0;
		virtual void addSecond() = 0;
		virtual vector<string> getTime() = 0;
};

// class _12HourClock, inherents parent of Time.
class _12HourClock : public Time {

	private:
		// enum to indicate if the clock is in AM or PM state. 
		// by default will start at AM.
		enum AMPM { AM, PM } ampm;
	public:
		_12HourClock(int h, int m, int s) {
			hours = h;
			minutes = m;
			seconds = s;
			ampm = AM;
		}
		void addHour();
		void addMinute();
		void addSecond();
		vector<string> getTime();
		string getTimeString();

};

// class _24HourClock, inherents parent of Time.
class _24HourClock : public Time {

	public:
		_24HourClock(int h, int m, int s) {
			hours = h;
			minutes = m;
			seconds = s;
		}
		void addHour();
		void addMinute();
		void addSecond();
		vector<string> getTime();

};


#endif