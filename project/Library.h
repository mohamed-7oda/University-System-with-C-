#include "non_academic.h"
#pragma once
#include <iostream>
using namespace std;
#include <string>


class Library : public non_academic {
private:
    double time;
    int days;

public:
    void setTime(double t);
    double getTime();
    void setdays(int d);
    int getdays();
    void timeFunction();
    void borrowFunction();
};


