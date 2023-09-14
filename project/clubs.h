#pragma once
#include "non_academic.h"
#include <iostream>
using namespace std;
#include <string>


class clubs : public non_academic {
private:
    std::string available_clubs[5];

public:
    clubs();

    void displayAvailableClubs();
};


