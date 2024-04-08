#include <iostream>
#include <iomanip>

#include "GroceryTracker.h"

using namespace std;

int main() {


	// create a new grocery tracker object
	GroceryTracker tracker("frequency.dat", "CS210_Project_Three_Input_File.txt");

	// load the file into memory
	tracker.loadInputData(); 

	// store an int for users choice
	int choice;

	do {

		// display our menu first
		cout << setfill('=') << setw(33) << "" << endl;
		cout << "| " << setfill(' ') << setw(12) << "" << "Menu:" << setfill(' ') << setw(13) << "" << "|" << endl;
		cout << "|" << setfill(' ') << setw(31) << "" << "|" << endl;
		cout << "| " << "1. Lookup item frequency" << setfill(' ') << setw(8) << " | " << endl;
		cout << "| " << "2. Print item frequency list" << "  |" << endl;
		cout << "| " << "3. Print histogram" << setfill(' ') << setw(14) << " | " << endl;
		cout << "| " << "4. Exit" << setfill(' ') << setw(25) << " | " << endl;
		cout << setfill('-') << setw(33) << "" << endl;

		// take user input
		cin >> choice;

		switch (choice) {

			// lookup the frequency of an item
			case 1: {
				string itemToLookup;
				cout << "Enter item to lookup: " << endl;
				cin >> itemToLookup;
				int foundFrequency = tracker.getItemFrequency(itemToLookup);
				cout << "Frequency of " << itemToLookup << " is " << foundFrequency << endl;
				cout << endl;
				break;
			}
			case 2: {
				tracker.printItemFrequency();
				break;
			}
			case 3: {
				tracker.printHistogram();
				break;
			}
			// save data to backup
			case 4: {
				tracker.saveDatabackup();
				cout << "Exiting program." << endl;
				break;
			}
			default: {
				cout << "Invalid choice inputted. Try again." << endl;
			}

		}


	} while (choice != 4); // loop until exit code is received


	return 0;
}