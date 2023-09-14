#include "person.h"
using namespace std;
#pragma once
#include <string>



class student : public person {

protected:
	int year;
	float gpa;

public:
	void setyear(int y);
	int getyear();
	void setgpa(float g);
	float getgpa();
};

