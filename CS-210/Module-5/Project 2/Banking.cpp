#include <iostream>
#include <iomanip>

using namespace std;

#include "Investment.h";
#include "CalculationInteferace.h";


void StartInputLoop() {

	// create a new investment object to place input into
	Investment userInvestment;

	// string to detect if user wants to continue input loop
	string loop_choice;

	// all of these variables are user input values
	struct UserInput {
		double initialAmount;
		double monthlyDeposit;
		double annualInterest;
		int years;
	};

	// declare our struct to place data members inside
	UserInput input;

	// bool to keep input loop cycled
	bool isLooping = true;

	do {

		// output a header
		cout << setfill('*') << setw(50) << '*' << endl;
		cout << "|" << setfill(' ') << setw(15) << "" << "Financial Data" << setfill(' ') << setw(20) << "|" << endl;
		cout << setfill('-') << setw(50) << "-" << endl;

		// initital investment output
		cout << "Initial Investment Amount: $";
		cin >> input.initialAmount;
		
		// monthly deposit output
		cout << "Monthly Deposit: $";
		cin >> input.monthlyDeposit;

		// annual interest output
		cout << "Annual Interest: %";
		cin >> input.annualInterest;

		// num of years for investment cycle
		cout << "Number of years: ";
		cin >> input.years;
		cout << endl;

		// initialize our investment data
		userInvestment.setInitialInvestment(input.initialAmount);
		userInvestment.setMonthlyDeposit(input.monthlyDeposit);
		userInvestment.setAnnualInterest(input.annualInterest);
		userInvestment.setNumOfYears(input.years);

		// display all of the data
		cout << "Initial Investment: " << setfill(' ') << right << setw(18) << "$" << userInvestment.getInitialInvestment() << endl;
		cout << "Monthly Deposit: " << setfill(' ') << right << setw(21) << "$" << userInvestment.getMonthlyDeposit() << endl;
		cout << "Annual Interest: " << setfill(' ') << right << setw(20) << " " << userInvestment.getAnnualInterest() << "%" << endl;
		cout << "Number of years: " << setfill(' ') << right << setw(20) << " " << userInvestment.getNumOfYears() << endl;

		// end an additional line for formatting
		cout << endl;

		// use try / catch clauses to calculate both data with and without monthly deposits
		try {
			CalculateWithoutDeposits(userInvestment);
		}
		catch (const exception exc) {
			// if there's an exception, print it and indicate, also break the loop.
			cout << exc.what() << endl;
			cout << "There was an error with calculating accrual without monthly deposits. Exiting the loop.";
			isLooping = false;
			break;
		}

		try {
			CalculateWithDeposits(userInvestment);
		}
		catch (const exception exc) {
			cout << exc.what() << endl;
			cout << "There was an error with calculating accrual with monthly deposits. Exiting the loop.";
			isLooping = false;
			break;
		}

		// ask if user wants to continue
		cout << "Continue? Y/N" << endl;
		cin >> loop_choice;

		// if the choice is N, we exit the loop.
		if (loop_choice == "n" || loop_choice == "N") isLooping = false;

	} while (isLooping);


}

int main() {

	// use a try / catch clause to start our loop
	try {
		StartInputLoop();
	}
	catch (const exception exc) {
		cout << exc.what() << endl;
		cout << "There was an error with starting the main program loop." << endl;
	}

}


