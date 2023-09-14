#include "teach.h"
#include <iostream>
using namespace std;
#include <string>



void teach::calc_salary() {
	if (year == 1 && num_subjects >= 1) {
		cout << "Your salary = 1000$ " << "\n";
	}

	else if (year == 1 && num_subjects >= 2) {
		cout << "Your salary = 1500$ " << "\n";
	}

	else if (year == 2 && num_subjects >= 1) {
		cout << "Your salary = 2000$ " << "\n";
	}

	else if (year == 2 && num_subjects >= 2) {
		cout << "Your salary = 2500$ " << "\n";
	}

	else if (year == 3 && num_subjects >= 1) {
		cout << "Your salary = 3000$ " << "\n";
	}

	else if (year == 3 && num_subjects >= 2) {
		cout << "Your salary = 3500$ " << "\n";
	}

	else if (year == 4 && num_subjects >= 1) {
		cout << "Your salary = 4000$ " << "\n";
	}

	else if (year == 4 && num_subjects >= 2) {
		cout << "Your salary = 4500$ " << "\n";
	}

	else if (year == 5 && num_subjects >= 1) {
		cout << "Your salary = 5000$ " << "\n";
	}

	else if (year > 5 && num_subjects >= 2) {
		cout << "Your salary = 5500$ " << "\n";
	}

}


void teach::show_subjects() {
	int faculty;
	cout << "what faculty are you explaning in " << "\n" << "1) cs , 2) engineering , 3) medicine ";
	cin >> faculty;


	if (faculty == 1) {
		cout << "Your subjects are (Programming - OOP - Calculus - Linear algebra - Probability) " << "\n";
	}

	else if (faculty == 2) {
		cout << "Your subjects are (Linear algebra - Electrical engineering - Materials engineering) " << "\n";
	}

	else if (faculty == 2) {
		cout << "Your subjects are (Anatomy - Physiology - Biochemistry)" << "\n";
	}

}


void teach :: setnum_subjects(int s) {
     num_subjects = s;
}

int teach::getnum_subjects() {
	return num_subjects;
}

void teach::setyear(int y) {
	year = y;
}

int teach::getyear() {
	return year;
}