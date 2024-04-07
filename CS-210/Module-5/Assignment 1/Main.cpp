#include<iostream>
#include<fstream>
#include <iomanip>


using namespace std;

double ConvertToCelsius(double tempF) {

	// converted C
	double tempC = 5.0 / 9.0 * (tempF - 32);

	// write this conversion to the output file, attaching its city to the line.
	return tempC;

}

int main() {

	// open file streams for both our read and write files
	ifstream inFile("FahrenheitTemperature.txt");
	ofstream outFile("CelsiusTemperature.txt");

	// if neither of the files open succesfully, there was an issue and we should end execution
	// and indicate with a message
	if (!inFile.is_open() || !outFile.is_open()) {
		cout << "Error opening one or more of the files." << endl;
		return 1;
	}

	// create variables of temperature and city to store
	string city;
	double tempF;

	// while there are lines to read, execute code body
	// we are going to use inFile >> city >> as an expression to indicate when the while body should
	// terminate. this first places the value into our variables, and then only executes code body
	// if there are new lines to continue with and both city and tempF are read. will prevent duplication at EOF.
	while (inFile >> city >> tempF) {


		// use ConvertToCelsius with the appropriate params
		double tempC = ConvertToCelsius(tempF);

		outFile << city << " " << fixed << setprecision(2) << tempC << endl;

	}

	// check if we are at end of the file, if not indicate for debugging purposes
	if (!inFile.eof()) {
		cout << "There was an issue in reaching the end of the file." << endl;
	}

	// close both of our file streams as we are finished with looping.
	inFile.close();
	outFile.close();




	return 0;
}