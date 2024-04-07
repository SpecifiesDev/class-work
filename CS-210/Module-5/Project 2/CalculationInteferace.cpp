#include "CalculationInteferace.h"

#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

void CalculateWithoutDeposits(Investment t_userInvestment) {

	// get the necessary data from our investment object
	double initialInvestment = t_userInvestment.getInitialInvestment();
	int years = t_userInvestment.getNumOfYears();

	// store a header constant to lower the length of cout lines
	string header_constant = "Balance & Interest Without Any Additional Monthly Deposits";

	cout << endl;

	// output our main header using cout
	cout << setfill(' ') << setw(17) << "" << header_constant << setfill(' ') << setw(17) << "" << endl;
	cout << setfill('=') << setw(100) << "" << endl;
	
	// use default c++ alignment manip to align the output
	cout << setfill(' ') << left << setw(30) << "Year" << "Year End Interest" << right << setw(30) << "Year End Balance" << endl;
	cout << setfill('-') << setw(100) << "" << endl;

	// add the intiial investment to the total, as we don't upon instatination
	t_userInvestment.setTotalWithoutDeposits(initialInvestment);

	// create a variable to store interest YTD that will be used for iteration purposes
	double interestYTD = 0;

	// loop over, starting at year 1 until the end of years user inputted
	for (unsigned int year = 1; year <= years; year++) {

		// for ever year we loop over, loop over a 12 month span and calculate interest every month
		// to get a final YTD value
		for (unsigned int month = 1; month <= 12; month++) {
			interestYTD += t_userInvestment.calcWithoutDeposits();
		}

		// add the interest we calculate this iteration to the overall total
		t_userInvestment.setTotalWithoutDeposits(interestYTD);

		// output the necessary info per year
		cout << setfill(' ') << left << setw(30) << year;
		cout << "$" << fixed << setprecision(2) << interestYTD;
		cout << right << setw(30) << "$" << fixed << setprecision(2) << t_userInvestment.getTotalWithoutDeposits() << endl;

		// reset interestYTD so that we get a new value every year iteration
		interestYTD = 0;

	}



}
void CalculateWithDeposits(Investment t_userInvestment) {

	double initialInvestment = t_userInvestment.getInitialInvestment();
	double monthlyDeposit = t_userInvestment.getMonthlyDeposit();
	int years = t_userInvestment.getNumOfYears();

	string header_constant = "Balance & Interest With Additional Monthly Deposits";

	cout << endl;
	cout << endl;

	cout << setfill(' ') << setw(17) << "" << header_constant << setfill(' ') << setw(17) << "" << endl;
	cout << setfill('=') << setw(100) << "" << endl;
	cout << setfill(' ') << left << setw(30) << "Year" << "Year End Interest" << right << setw(30) << "Year End Balance" << endl;
	cout << setfill('-') << setw(100) << "" << endl;

	t_userInvestment.setTotalWithDeposits(initialInvestment);

	double interestYTD = 0;

	for (unsigned int year = 1; year <= years; year++) {

		for (unsigned int month = 1; month <= 12; month++) {
			// add a new monthly deposit to total every iteration
			t_userInvestment.setTotalWithDeposits(monthlyDeposit);

			interestYTD += t_userInvestment.calcWithDeposits();

			t_userInvestment.setTotalWithDeposits(t_userInvestment.calcWithDeposits());
		}

		cout << setfill(' ') << left << setw(30) << year;
		cout << "$" << fixed << setprecision(2) << interestYTD;
		cout << right << setw(30) << "$" << fixed << setprecision(2) << t_userInvestment.getTotalWithDeposits() << endl;

		interestYTD = 0;

	}



}
