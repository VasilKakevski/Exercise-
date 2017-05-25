/*
 * Manager.h
 *
 *  Created on: Apr 21, 2017
 *      Author: mediff
 */

#ifndef MANAGER_H_
#define MANAGER_H_
#include <iostream>
#include "Adress.h"
#include <string>
using namespace std;
class Manager {
private:
	string firstname;
	string lastname;
	string department;
	int salaryPerHour;
	int hour;
	Adress adresses;
	int yearsOfExperience;

public:
	Manager();
	Manager(string,string,string,int,int,Adress&);
	void Print();
	int Earnings();
	virtual ~Manager();
	const string& getDepartment() const;
	void setDepartment(const string& department);
	const string& getFirstname() const;
	void setFirstname(const string& firstname);
	int getHour() const;
	void setHour(int hour);
	const string& getLastname() const;
	void setLastname(const string& lastname);
	int getSalaryPerHour() const;
	void setSalaryPerHour(int salaryPerHour);

	int getYearsOfExperience() const {
		return yearsOfExperience;
	}

	void setYearsOfExperience(int yearsOfExperience) {
		this->yearsOfExperience = yearsOfExperience;
	}
};

#endif /* MANAGER_H_ */
