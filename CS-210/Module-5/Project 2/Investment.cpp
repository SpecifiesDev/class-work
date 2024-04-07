
#include <iostream>;
#include "Investment.h";

using namespace std;

Investment::Investment() {
	this->t_initialInvestment = 0;
	this->t_monthlyDeposit = 0;
	this->t_annualInterest = 0;
	this->t_years = 0;
	this->t_totalAmountWithDeposits = 0;
	this->t_totalAmountWithoutDeposits = 0;
}

// define the logic of all of our setters

// set our intial investment with a given double as the input
void Investment::setInitialInvestment(double t_initialInvestment) {
	this->t_initialInvestment = t_initialInvestment;
}

void Investment::setAnnualInterest(double t_annualInterest) {
	this->t_annualInterest = t_annualInterest;
}

void Investment::setMonthlyDeposit(double t_monthlyDeposit) {
	this->t_monthlyDeposit = t_monthlyDeposit;
}

void Investment::setNumOfYears(int t_years) {
	this->t_years = t_years;
}

void Investment::setTotalWithDeposits(double t_amount) {
	this->t_totalAmountWithDeposits += t_amount;
}

void Investment::setTotalWithoutDeposits(double t_amount) {
	this->t_totalAmountWithoutDeposits += t_amount;
}

double Investment::calcWithDeposits() {
	return this->t_totalAmountWithDeposits * ((this->t_annualInterest / 100) / 12);
}

double Investment::calcWithoutDeposits() {
	return this->t_totalAmountWithoutDeposits * ((this->t_annualInterest / 100) / 12);
}

double Investment::getTotalWithDeposits() {
	return this->t_totalAmountWithDeposits;
}

double Investment::getTotalWithoutDeposits() {
	return this->t_totalAmountWithoutDeposits;
}

double Investment::getInitialInvestment() {
	return this->t_initialInvestment;
}

int Investment::getNumOfYears() {
	return this->t_years;
}

double Investment::getMonthlyDeposit() {
	return this->t_monthlyDeposit;
}

double Investment::getAnnualInterest() {
	return this->t_annualInterest;
}




