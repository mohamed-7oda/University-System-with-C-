#include "medicine.h"
#include <iostream>
using namespace std;
#include <string>

int medicine::finances() {
	int money;
	if (year == 1 && gpa < 2) {
		money = 80000;
		cout << "Your expenses this year = " << money << "\n";
	}

	else if (year == 1 && gpa > 2) {
		money = 40000;
		cout << "Your expenses this year = " << money << "\n";
	}

	else if (year == 2 && gpa < 2) {
		money = 85000;
		cout << "Your expenses this year = " << money << "\n";
	}

	else if (year == 2 && gpa > 2) {
		money = 42500;
		cout << "Your expenses this year = " << money << "\n";
	}

	else if (year == 3 && gpa < 2) {
		money = 90000;
		cout << "Your expenses this year = " << money << "\n";
	}

	else if (year == 3 && gpa > 2) {
		money = 45000;
		cout << "Your expenses this year = " << money << "\n";
	}

	else if (year == 4 && gpa < 2) {
		money = 95000;
		cout << "Your expenses this year = " << money << "\n";
	}

	else if (year == 4 && gpa > 2) {
		money = 47500;
		cout << "Your expenses this year = " << money << "\n";
	}

	else if (year == 5 && gpa < 2) {
		money = 100000;
		cout << "Your expenses this year = " << money << "\n";
	}

	else if (year == 5 && gpa > 2) {
		money = 50000;
		cout << "Your expenses this year = " << money << "\n";
	}
	return money;
}



void medicine::courses() {

	if (year == 1) {
		cout << "Your courses are  (Anatomy - Physiology - Biochemistry)" << "\n";
	}

	else if (year == 2) {
		cout << "Your courses are (Medicial Ethics - Medical Terminology - Pharmacology)" << "\n";

	}

	else if (year == 3) {
		cout << "Your courses are (Histology - Medical Microbology - Pathology)" << "\n";
	}

	else if (year == 4) {
		cout << "Your courses are (Pharmacology - Medical Genetics - Pathophysiology)" << "\n";

	}

	else if (year == 5) {
		cout << "Your courses are (Organ based - Empidemiology - Biostatitstics)" << "\n";

	}

}