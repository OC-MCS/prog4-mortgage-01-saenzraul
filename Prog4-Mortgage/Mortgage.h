#pragma once
#include <iostream>
// header file for Mortgage class
using namespace std;

class Mortage
{
private:
	double loanAmount;
	double intrestRate;
	double years;
	double payment;
	double term;
public:
	Mortage();
	Mortage(double, double, double, double);
	double calculateTerm();
	double calculatePayment();
	void getTerm();
	void getPayment

};