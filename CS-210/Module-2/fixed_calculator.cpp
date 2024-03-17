/*
 * Calculator.cpp
 *
 *  Date: March 17, 2024
 *  Author: Dallas Gable
 *  Purpose: Take a file with a large amount of bugs and errors and debug it.
 */

#include <iostream>

using namespace std;

// main should return an int not void
int main()
{
	// we were not using the statement character
	int op1, op2;
	char operation;

	// missing colon, wrong literal declaration
	char answer = 'y';
	while (answer == 'y')
	{
		cout << "Enter expression" << endl;

		// wrong operation order
		cin >> op1 >> operation >> op2;

		// this would actually be a better use for switches
		// as the operations are constant, inclusive (only one per input)
		// and it would make the code cleaner and more readable

		switch (operation) {

			// original statement was using wrong literal, and no brackets
			case '+':
				// using cin pointer between op2 and end
				cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
				break;
			// original statement missing bracket
			case '-':
				// wrong pointer bwteen op 1 and -
				cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
				break;
			// original statement missing bracket
			case '*':
				// the is the multiplication function, but output is outputting division.
				// change sign. also missing a colon
				cout << op1 << "  *  " << op2 << " = " << op1 * op2 << endl;
				break;
			// original statement missing bracket
			case '/':
				// division function but program is outputting multiplication.
				// change sign.
				cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
				break;
			default:
				cout << "Invalid operation." << endl;
		}




		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
	}

	// return 0
	return 0;
}