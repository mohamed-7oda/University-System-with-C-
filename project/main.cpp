#include <iostream>
using namespace std;
#include <string>
#include "student.h"
#include "computer_science.h"
#include "engineering.h"
#include "person.h"
#include "medicine.h"
#include "teach.h"
#include "Dorms.h"
#include "PublicHolidays.h"
#include "clubs.h"
#include "Cafetreia.h"
#include "Library.h"
using namespace std;

int main()
{
    int ans, faculty, id, age, gender, year, info;
    float gpa;
    string first, second, email;


    cout << "Welcome to MMS University self service"<< "\n";
    cout << "Enter number 1 for students services , Enter number 2 for teachers services , Enter number 3 for nonacademic infromarions" << "\n";
    cin >> ans;
    if (ans == 1) {

        student x;

        cout << "Enter your frist name: " << "\n";
        cin >> first;
        cout << "Enter your last name: " << "\n";
        cin >> second;
        x.setname(first,second);

        cout << "Enter your ID: " << "\n";
        cin >> id;
        x.setid(id);

        cout << "Enter your GPA: " << "\n";
        cin >> gpa;
        x.setgpa(gpa);


        cout << "Enter you age: " << "\n";
        cin >> age;
        x.setage(age);


        cout << "Enter your gender: " << "\n "<< "1) Male , 2) Female" << "\n";
        cin >> gender;
        x.setgender(gender);


        
        cout << "which faculty are you in " << "\n" << "1) Computer science , 2) Engineering , 3) Medicine " <<"\n";
        cin >> faculty;
        if (faculty == 1) {
            computer_science x;

            cout << "Enter your year: " << "\n" << "1) year one , 2) year two , 3) year three , 4) year four " << "\n";
            cin >> year;
            x.setyear(year);

            cout << "waht do you want to know: " << "\n" << "1) Your financial informations , 2) Your courses " << "\n";
            cin >> info;

            if (info == 1) {
                x.finances();
            }

            if (info == 2) {
                x.courses();
            }
       

        }

        else if (faculty == 2) {
            engineering x;

            cout << "Enter your year: " << "\n" << "1) year one , 2) year two , 3)  year three , 4) year four , 5) year five" << "\n";
            cin >> year;
            x.setyear(year);

            cout << "waht do you want to know: " << "\n" << "1) Your financial informations , 2) Your courses " << "\n";
            cin >> info;

            if (info == 1) {
                x.finances();
            }

            if (info == 2) {
                x.courses();
            }

        }

        else if (faculty == 3) {
            medicine x;

            cout << "Enter your year: " << "\n" << "1) year one , 2) year two , 3) year three , 4) year four , 5) year five" << "\n";
            cin >> year;
            x.setyear(year);

            cout << "waht do you want to know: " << "\n" << "1) Your financial informations , 2) Your courses " << "\n";
            cin >> info;

            if (info == 1) {
                x.finances();
            }

            if (info == 2) {
                x.courses();
            }

        }
    }

    else if (ans == 2) {
        teach x;

        cout << "Enter your frist name: " << "\n";
        cin >> first;
        cout << "Enter your last name: " << "\n";
        cin >> second;
        x.setname(first, second);

        cout << "Enter your ID: " << "\n";
        cin >> id;
        x.setid(id);

        cout << "Enter your gender: " << "\n " << "1) Male , 2) Female" << "\n";
        cin >> gender;
        x.setgender(gender);

        int num_years;
        cout << "How many years you spent at MMS university ? " << "\n";
        cin >> num_years;
        x.setyear(num_years);

        int subjects;
        cout << "How many subjects you have ? " << "\n";
        cin >> subjects;
        x.setnum_subjects(subjects);

        
        cout << "what do you want to know ?" << "\n" << "1) Your salary , 2) Your subjects " << "\n";
        cin >> info;
        if (info == 1) {
            x.calc_salary();
        }

        else if (info == 2) {
            x.show_subjects();
        }

    }

    else if (ans == 3) {
        cout << "what non academic information you want to know?" << "\n" << "1) clubs , 2)Holydays , 3)Dorms , 4)cafeteria , 5)library" << "\n";
        cin >> info;
        if (info == 1) {
            clubs x;
            x.displayAvailableClubs();
        }

        else if (info == 2) {
            PublicHolidays x;
            x.displayOfficialDayOffs();
        }

        else if (info == 3) {
            Dorms x;
            x.inquirePrices();
        }

        else if (info == 4) {
            Cafeteria x;
            double p, t;
            cout << "enter the price of the purchases= " << "\n";
            cin >> p;
            cout << "what time we are now? " << "\n";
            cin >> t;
            x.settime(t);
            x.setPrices(p);
            x.pricesFunction();
            x.timeFunction();

        }

        else if (info == 5) {
            Library x;
            double t;
            int d;
            cout << "Enter the time" << "\n";
            cin >> t;
            x.setTime(t);
            x.timeFunction();
            cout << "enter the days" << "\n";
            cin >> d;
            x.setdays(d);
            x.borrowFunction();

        }
    }

}
