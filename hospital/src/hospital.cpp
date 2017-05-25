//============================================================================
// Name        : hospital.cpp
// Author      : vasil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "HearthRate.h"
using namespace std;

int main() {
	string firstname;
	string lastname;
	int day;
	string month;
	int year;
	cout << "Enter name of patient " << endl;
	cin >> firstname;
	cout << "Enter last name of patient" << endl;
	cin >> lastname;
	cout << "Enter day that they are born " << endl;
	cin >> day;
	cout << "Enter month with words" << endl;
	cin >> month;
	cout << "Enter year that patient are born" << endl;
	cin >> year;

	HearthRate patient1;
	patient1.setFirstname(firstname);
	patient1.setLastname(lastname);
	patient1.setDay(day);
	patient1.setMonth(month);
	patient1.setYear(year);

	cout << "The age of patient1 is " << patient1.getAge()<<endl;
	cout<<"Your maximum rate is "<<patient1.getMaximumHearthrate();
	return 0;
}
