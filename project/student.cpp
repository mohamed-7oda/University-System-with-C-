#include "student.h"
#include <iostream>
using namespace std;
#include <string>



//functions of student class

void student::setyear(int y) {
    year = y;
}

int student::getyear() {
    return year;
}

void student::setgpa(float g) {
    gpa = g;
}

float student::getgpa() {
    return gpa;
}