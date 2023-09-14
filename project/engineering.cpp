#include "engineering.h"
#include <iostream>
using namespace std;
#include <string>

int engineering::finances() {
	int money = 0;
	if (year == 1 && gpa < 2) {
		money = 65000;
		cout << "Your expenses this year =" << money << "\n";
	}

	else if (year == 1 && gpa > 2) {
		money = 32500;
		cout << "Your expenses this year =" << money << "\n";
	}

	else if (year == 2 && gpa < 2) {
		money = 70000;
		cout << "Your expenses this year =" << money << "\n";
	}

	else if (year == 2 && gpa > 2) {
		money = 35000;
		cout << "Your expenses this year =" << money << "\n";
	}

	else if (year == 3 && gpa < 2) {
		money = 75000;
		cout << "Your expenses this year =" << money << "\n";
	}

	else if (year == 3 && gpa > 2) {
		money = 37500;
		cout << "Your expenses this year =" << money << "\n";
	}

	else if (year == 4 && gpa < 2) {
		money = 80000;
		cout << "Your expenses this year =" << money << "\n";
	}

	else if (year == 4 && gpa > 2) {
		money = 40000;
		cout << "Your expenses this year =" << money << "\n";
	}

	else if (year == 5 && gpa < 2) {
		money = 85000;
		cout << "Your expenses this year =" << money << "\n";
	}

	else if (year == 5 && gpa > 2) {
		money = 42500;
		cout << "Your expenses this year =" << money << "\n";
    }
	return money;
}

void engineering::courses() {

	if (year == 1) {
		cout << "Your courses are  (CS - Calculus - Physics - Chemistry)" << "\n";
	}

	else if (year == 2) {
		cout << "Your courses are (Material science - Mechanics - Introduction to engineering)" << "\n";

	}

	else if (year == 3) {
		cout << "Your courses are ( Linear algebra - Electrical engineering - Materials engineering)" << "\n";

	}

	else if (year == 4) {
		cout << "Your courses are (Engineering ethics - Advanced engineering - Elective courses)" << "\n";

	}

	else if (year == 5) {
		cout << "Your courses are (Enterneurship - Profissional development - Research projects)" << "\n";

	}

}