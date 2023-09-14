#pragma once
#include "person.h"
using namespace std;
#include <string>


class teach : public person {

protected:
	int year;
	int num_subjects;

public:
	void calc_salary();
	void show_subjects();
	void setnum_subjects(int sub);
	int getnum_subjects();
	void setyear(int year);
	int getyear();


};

