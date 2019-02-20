#include "Mortgage.h"

using namespace std;

	Mortage::Mortage()
	{
		loanAmount = 0;
		intrestRate = 0;
		years = 0;
		payment = 0;
		term = 0;
	}

	Mortage::Mortage(double pay, double loan, double intrest, double length) {
		payment = pay;
		loanAmount = loan;
		intrestRate = intrest;
		years = length;
		term = 0;
	}

	double Mortage :: calculateTerm(){
		double base, exponent;
		base = (1 + (intrestRate / 12));
		exponent = 12 * years;

		term = pow(base, exponent);

		return term;
	}

	double Mortage :: calculatePayment(){
		payment = (loanAmount*(intrestRate / 12)*term)/(term-1);
	}