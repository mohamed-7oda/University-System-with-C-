#pragma once
#include <string>
using namespace std;

// parent class : person
class person {
protected:

	string name;
	int id;
	int gender;
	int age;


public:

	void setname(string first, string second);
	string getname();
	void setid(int i);
	int getid();
	void setgender(int g);
	int getgender();
	void setage(int a);
	int getage();
	void display();
};

