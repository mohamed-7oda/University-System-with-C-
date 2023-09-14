using namespace std;
#include <string>
#include "clubs.h"
#include <iostream>

clubs::clubs() {
    available_clubs[0] = "Chess club";
    available_clubs[1] = "Music club";
    available_clubs[2] = "Football club";
    available_clubs[3] = "Video games club";
    available_clubs[4] = "Science club";
}

void clubs::displayAvailableClubs() {
    std::cout << "Available clubs:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "- " << available_clubs[i] << std::endl;
    }
}
