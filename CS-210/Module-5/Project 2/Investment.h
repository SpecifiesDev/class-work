#ifndef INVESTMENT_H
#define INVESTMENT_H

class Investment {

	public:
		// constructor
		Investment();

		// mutators (setters) for the values within our investment class
		void setInitialInvestment(double t_initialInvestment);
		void setMonthlyDeposit(double t_monthlyDeposit);
		void setAnnualInterest(double t_annualInterest);
		void setNumOfYears(int t_years);
		void setTotalWithDeposits(double t_totalAmount);
		void setTotalWithoutDeposits(double t_totalAmount);


		// accesors (getters) for the values within our investment class
		double getInitialInvestment();
		double getMonthlyDeposit();
		double getAnnualInterest();
		int getNumOfYears();
		double getTotalWithDeposits();
		double getTotalWithoutDeposits();

		double calcWithDeposits();
		double calcWithoutDeposits();

	private:
		double t_initialInvestment;
		double t_monthlyDeposit;
		double t_annualInterest;
		double t_years;
		double t_totalAmountWithDeposits;
		double t_totalAmountWithoutDeposits;



};


#endif