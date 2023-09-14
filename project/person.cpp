#include "person.h"
#include <iostream>
using namespace std;
#include <string>

//functions of person class
void person::setname(string first,string second) {
	name = first ;
}

string person::getname() {
	return name;
}

void person::setid(int i) {
	id = i;
}

int person::getid() {
	return id;
}


void person::setgender(int g) {
	gender = g;
}

int person::getgender() {
	return gender;
}

void person::setage(int a) {
	age = a;
}

int person::getage() {
	return age;
}

void person::display() {
	cout << "Name:" << name << endl;
	cout << "Age:" << age << endl;

}


