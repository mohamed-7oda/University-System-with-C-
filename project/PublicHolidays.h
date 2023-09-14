#pragma once
#include <string>
#include "non_academic.h"
#include <iostream>
using namespace std;


class PublicHolidays : non_academic {
private:
    struct Holiday {
        std::string date;
        std::string dayOfWeek;
    };

    Holiday holidays[18];

public:
    PublicHolidays();

    void displayOfficialDayOffs();
};


