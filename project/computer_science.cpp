#include "computer_science.h"
#include <iostream>
using namespace std;
#include <string>

int computer_science::finances () {
	int money;
	if (year == 1 && gpa < 2) {
		money = 50000;
		cout << "Your expenses this year = " << money << "\n";
     }

	else if (year == 1 && gpa > 2) {
		money = 25000;
		cout << "Your expenses this year = " << money << "\n";
	}

	else if (year == 2 && gpa < 2) {
		money = 55000;
		cout << "Your expenses this year = " << money <<"\n";
	}

	else if (year == 2 && gpa > 2) {
		money = 27500;
		cout << "Your expenses this year = " << money << "\n";
	}

	else if (year == 3 && gpa < 2) {
		money = 60000;
		cout << "Your expenses this year = " << money << "\n";
	}

	else if (year == 3 && gpa > 2) {
		money = 30000;
		cout << "Your expenses this year = " << money << "\n";
	}

	else if (year == 4 && gpa < 2) {
		money = 65000;
		cout << "Your expenses this year = " << money << "\n";
	}

	else if (year == 4 && gpa > 2) {
		money = 32500;
		cout << "Your expenses this year = " << money << "\n";
	}
	return 0;
}

void computer_science::courses() {

	if (year == 1) {
		cout << "Your courses are (Programming - OOP - Calculus - Linear algebra - Probability)" << "\n";
	}

	else if (year == 2) {
		cout << "Your courses are (Machine learning - Data structures - Data mining - Data gonvernance - Algorithm design and anlysis)" << "\n";

	}

	else if (year == 3) {
		cout << "Your courses are ( Artificial intelligence - Deep learning - Computer vision - Advanced database)" << "\n";

	}

	else if (year == 4) {
		cout << "Your courses are (Nature inspired computation - Big data - Speech recognation)" <<"\n";

	}

}