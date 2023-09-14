
#include "Cafetreia.h"
using namespace std;
#include <string>
#include <iostream>


void Cafeteria::setPrices(double p) {
    prices = p;
}

double Cafeteria::getPrices() {
    return prices;
}

void Cafeteria::settime(double t) {
    time = t;
}

double Cafeteria::gettime() {
    return time;
}

void Cafeteria::pricesFunction() {
    if (prices < 50) {
        cout << "Give me 50 pounds, and I will give you the change." << endl;
    }
    else {
        cout << "Pay with Visa." << endl;
    }
}

void Cafeteria::timeFunction() {
    if (time < 8.10 || time > 4.10) {
        cout << "Sorry, the cafeteria is closed." << endl;
    }
    else {
        cout << "The cafeteria is opened." << endl;
    }
}
