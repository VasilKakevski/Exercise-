/*
 * Expert.h
 *
 *  Created on: Apr 21, 2017
 *      Author: mediff
 */

#ifndef EXPERT_H_
#define EXPERT_H_
#include <string>
using namespace std;

class Expert {
private:
	string firstname;
	string lastname;
	string department;
	int salaryPerHour;
	int hour;
	int bonus;

public:
	Expert(string,string,string,int,int,int);
	virtual ~Expert();
	int Earnings();
	void Pritn();
	int getBonus() const;
	void setBonus(int bonus);
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
};

#endif /* EXPERT_H_ */
