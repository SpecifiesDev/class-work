#ifndef TIME_H
#define TIME_H

using namespace std;

#include<vector>


class Time {

	protected:
		int hours = 0;
		int minutes = 0;
		int seconds = 0;

		virtual void addHour() = 0;
		virtual void addMinute() = 0;
		virtual void addSecond() = 0;
		virtual vector<int> getTime() = 0;
};

class _12HourClock : public Time {

	private:
		enum AMPM { AM, PM } ampm;
	public:
		_12HourClock(int h, int m, int s) {
			hours = h;
			minutes = m;
			seconds = h;
			ampm = AM;
		}
		void addHour();
		void addMinute();
		void addSecond();
		vector<int> getTime();

};

class _24HourClock : public Time {

	public:
		_24HourClock(int h, int m, int s) {
			hours = h;
			minutes = m;
			seconds = h;
		}
		void addHour();
		void addMinute();
		void addSecond();
		vector<int> getTime();

};


#endif