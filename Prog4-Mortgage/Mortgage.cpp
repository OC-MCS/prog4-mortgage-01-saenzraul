#include<math.h>
#include "Mortgage.h"

mortage::mortage()
{
	loanAmount = 0.0;
	intrestRate = 0.0;
	yearsOnLoan = 0.0;
	payment = 0.0;
	term = 0.0;
}

mortage::mortage(double amount, double intrest, double years)
{
	loanAmount = amount;
	intrestRate = intrest;
	yearsOnLoan = years;

}

void mortage::calculateTerm()
{
	term = pow((1 + (intrestRate / 12)), (12 * yearsOnLoan));
}

void mortage::calculatePayment()
{
	payment = (loanAmount * (intrestRate / 12)* term) / (term - 1);
}

double mortage::getPayment() const
{
	return payment;
}

double mortage::getTerm() const
{
	return term;
}
