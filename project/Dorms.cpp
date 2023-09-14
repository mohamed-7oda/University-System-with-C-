#include "Dorms.h"
using namespace std;
#include <string>
#include <iostream>



void Dorms::inquirePrices() {
    char choice;
    std::cout << "Do you want to inquire about dorm prices? (Y/N): ";
    std::cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        std::cout << "Dorm Prices:\n";
        std::cout << "-------------------\n";
        std::cout << "Double room without AC: 7,000 EGP per term\n";
        std::cout << "Double room with AC: 9,000 EGP per term\n";
        std::cout << "Single room with AC: 14,000 EGP per term\n";
        std::cout << "Single room: 170 EGP per day\n";
    }
    else {
        std::cout << "Thank you for visiting. Goodbye!\n";
    }
}

