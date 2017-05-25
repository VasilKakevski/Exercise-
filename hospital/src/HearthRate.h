/*
 * HearthRate.h
 *
 *  Created on: Apr 6, 2017
 *      Author: mediff
 */

#ifndef HEARTHRATE_H_
#define HEARTHRATE_H_
#include <string>
using namespace std;

class HearthRate {
private:
	string firstname;
	string lastname;
	int day;
	string month;
	int year;
	int hearthrate;
public:
	HearthRate();
	HearthRate(string,string,int,string,int,int);
	virtual ~HearthRate();
	int getDay() const;
	void setDay(int day);
	const string& getFirstname() const;
	void setFirstname(const string& firstname);
	const string& getLastname() const;
	void setLastname(const string& lastname);
	const string& getMonth() const;
	void setMonth(const string& mounth);
	int getYear() const;
	void setYear(int year);
	int getAge();
	int getMaximumHearthrate();
	int getHearthrate() const;
	void setHearthrate(int hearthrate);
};

#endif /* HEARTHRATE_H_ */
