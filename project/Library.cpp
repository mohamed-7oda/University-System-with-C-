#include "Library.h"
using namespace std;
#include <string>
#include <iostream>



void Library::setTime(double t) {
    time = t;
}

double Library::getTime() {
    return time;
}

void Library::setdays(int d) {
    days = d;
}

int Library::getdays() {
    return days;
}

void Library::timeFunction() {
    if (time < 8.10 || time > 4.10) {
        cout << "Sorry, the Library is closed." << endl;
    }
    else {
        cout << "The Library is opened." << endl;
    }
}

void Library::borrowFunction() {
    if (days > 1 && days < 7) {
        cout << "Ok, you can borrow the book." << endl;
    }
    else {
        cout << "Sorry, you cannot borrow the book. The maximum borrowing period is 6 days." << endl;
    }
}
