using namespace std;
#include <string>
#include <iostream>
#include "PublicHolidays.h"


PublicHolidays::PublicHolidays() {
    holidays[0] = { "6-October", "Thursday" };
    holidays[1] = { "8-October", "Saturday" };
    holidays[2] = { "7-January", "Saturday" };
    holidays[3] = { "25-January", "Wednesday" };
    holidays[4] = { "16-April", "Sunday" };
    holidays[5] = { "17-April", "Monday" };
    holidays[6] = { "21-April", "Friday" };
    holidays[7] = { "22-April", "Saturday" };
    holidays[8] = { "25-April", "Tuesday" };
    holidays[9] = { "1-May", "Monday" };
    holidays[10] = { "27-June", "Tuesday" };
    holidays[11] = { "28-June", "Wednesday" };
    holidays[12] = { "29-June", "Thursday" };
    holidays[13] = { "30-June", "Friday" };
    holidays[14] = { "19-July", "Wednesday" };
    holidays[15] = { "23-July", "Sunday" };
    holidays[16] = { "27-September", "Wednesday" };
    holidays[17] = { "6-October", "Friday" };
}

void PublicHolidays::displayOfficialDayOffs() {
    std::cout << "Official day-offs through the academic year:" << std::endl;
    for (int i = 0; i < 18; i++) {
        std::cout << i + 1 << ". " << holidays[i].date << " ----> " << holidays[i].dayOfWeek << std::endl;
    }
}
