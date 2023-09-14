
#pragma once
#include "non_academic.h"
#include <iostream>
using namespace std;
#include <string>



class Cafeteria : public non_academic {
private:
    double prices;
    double time;

public:
    void setPrices(double p);
    double getPrices();
    void settime(double t);
    double gettime();
    void pricesFunction();
    void timeFunction();
};


