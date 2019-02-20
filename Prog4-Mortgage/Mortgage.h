#include<math.h>

class mortage
{
private:
	double loanAmount;
	double intrestRate;
	double yearsOnLoan;
	double term;
	double payment;
public:
	mortage(); // sets all values to 0.0
	mortage(double, double, double); // inputs user input to private Data
	void calculatePayment();
	void calculateTerm();
	double getPayment() const;
	double getTerm() const;

};
