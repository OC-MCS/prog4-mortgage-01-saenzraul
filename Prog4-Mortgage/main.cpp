#include <iostream>
#include "Mortgage.h"

using namespace std;
int main() {
	Mortage myMortage;

	myMortage  = Mortage();

	cout << myMortage.term;
	
	return 0;
}