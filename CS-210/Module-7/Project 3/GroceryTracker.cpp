#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

#include "GroceryTracker.h"


GroceryTracker::GroceryTracker(string backupPath, string readPath) {
	this->backupFilePath = backupPath;
	this->readFilePath = readPath;
}

void GroceryTracker::loadInputData() {

	// load our read path into a filestream
	ifstream readFile(this->readFilePath);

	// check if a file was loaded and not null.
	// if it is null or doesn't exist, throw an error and end execution
	if (!readFile) {
		cerr << "Error opening the input file. Try again." << endl;
		return;
	}

	// create our variables so that we can get each line of info from the file
	string itemName;
	int itemFrequency;
	
	while (readFile >> itemName >> itemFrequency) {
		// insert the item into our map
		this->itemStorage.insert({ itemName, itemFrequency });
	}

	// check if we are at the end of the file, if not indicate
	if (!readFile.eof()) {
		cerr << "There was an issue with reaching end of the file. Some data may have not been saved properly." << endl;
	}

	// once we are finished, close the input file as we no longer need the conn
	readFile.close();

}

int GroceryTracker::getItemFrequency(const string itemName) const {

	// use a const iterator to essentially count the frequency
	// if items are found, this will return an iterator pointing to the found element that is searched
	// if not, it will point to the end of the map
	map<string, int>::const_iterator iterator = this->itemStorage.find(itemName);

	// if an item is found
	if (iterator != this->itemStorage.end()) {
		return iterator->second; // return the value of the queried item
	}

	// otherwise return 0
	return 0;

}

void GroceryTracker::printItemFrequency() {

	// print the header
	cout << "Item Frequency:\n" << endl;

	// loop over every object in the map and print the key followed by value
	for (const auto& entry : this->itemStorage) {
		cout << entry.first << " " << entry.second << endl;
	}

	cout << endl;

}

void GroceryTracker::printHistogram() {

	// print the header
	cout << "Histogram\n" << endl;

	// loop over every item in the map
	for (const auto& entry : this->itemStorage) {
		// output key, followed by setting filling to * and w to frequency of value. 
		cout << entry.first << " " << setfill('*') << setw(entry.second) << "" << endl;

	}

	cout << endl;

}

void GroceryTracker::saveDatabackup() {

	// create an out filestream with our backup path
	ofstream outFile(this->backupFilePath);

	// if we weren't able to open the file, indicate and return
	if (!outFile) {
		cerr << "Error opening the file for the database backup. Please try again." << endl;
		return;
	}

	// loop over every key and value in the map and save it to our .dat file
	for (const auto& entry : this->itemStorage) {
		outFile << entry.first << " " << entry.second << endl;
	}

	// indicate if no eof
	if (!outFile.eof()) {
		cerr << "Out file for backup.dat did not reach end of file. Some data may have not been saved." << endl;
	}

	// close the file
	outFile.close();

}