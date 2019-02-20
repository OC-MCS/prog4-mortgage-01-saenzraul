//********************************************
// Raul Saenz								 *
// Assignment 4- Mortage					 *
// Febuary 20, 2019							 *
//********************************************

// There are no known bugs associated with this program.

#include <iostream>
#include <iomanip>
#include <cctype>
#include "Mortgage.h"

using namespace std;

bool checkInput(double testCase); // prototype for input validation

int main() {

	double loanAmount, intrestRate, loanLength;
	double totalPaid, payment;
	bool validInput = false;
		while (validInput != true) {
			cout << "Please Enter Amount on Mortage:" << endl;
			cin >> loanAmount;
			validInput = checkInput(loanAmount);
			if (validInput == false || cin.fail()) {
				validInput = false;
				cout << "Invalid Input" << endl;
				cin.clear();  // Stops Freak Out
				cin.ignore(32767, '\n'); // Moves over montrosity Input
			}
		}
		validInput = false;
		while (validInput == false) {
			cout << "Please Enter Intrest Rate: \n Ex: 8.5% as 8.5" << endl;
			cin >> intrestRate;
			validInput = checkInput(intrestRate);
			if (validInput == false || cin.fail()) {
				validInput = false;
				cout << "Invalid Input" << endl;
				cin.clear();
				cin.ignore(32767, '\n');
			}
		}
		validInput = false;
		while (validInput == false) {
			cout << "Please enter How many years loan is for:" << endl;
			cin >> loanLength;
			validInput = checkInput(loanLength);
			if (validInput == false || cin.fail()) {
				validInput = false;
				cout << "Invalid Input" << endl;
				cin.clear();
				cin.ignore(32767, '\n');
			}
		}
		intrestRate = intrestRate / 100;
	
	mortage myMortage(loanAmount, intrestRate, loanLength); // puts Local User Data into class

	myMortage.calculateTerm(); //instructs class to calculate term with private Data
	myMortage.calculatePayment(); // Instructs Class to calculate monthly payment using private data
	
	
	payment = myMortage.getPayment(); // instructs class to pass payment amount back to main
	totalPaid = payment * (loanLength * 12); // Calculates total paid
	
	cout << "You will pay $" << setprecision(5) << payment << " per Month" << endl;
	cout << "\n\nYou will pay a Grand total of $" << 
		setprecision(8) << totalPaid << " To the bank for your Mortage." << endl;
	
	
	return 0;
}

bool checkInput(double testCase) {
	bool valid = false;
	if(testCase < 0){
		valid = false;
	}
	else if (testCase >= 0) {
		valid = true;
	}
	return valid;
}