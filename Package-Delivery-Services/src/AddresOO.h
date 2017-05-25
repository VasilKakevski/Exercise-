/*
 * AddresOO.h
 *
 *  Created on: May 3, 2017
 *      Author: mediff
 */

#ifndef ADDRESOO_H_
#define ADDRESOO_H_
#include <string>
using namespace std;
class AddresOO {
	friend istream &operator>>(istream &, AddresOO&);
	friend ostream &operator<<(ostream& , AddresOO&);
private:
	string zip;///1000
	string country;//bg
	string state;//mlaqdost
	string city;//sofia
	string number;//2

public:
	AddresOO();
	virtual ~AddresOO();
	const string& getCity() const;
	void setCity(const string& city);
	const string& getCountry() const;
	void setCountry(const string& country);
	const string& getNumber() const;
	void setNumber(const string& number);
	const string& getState() const;
	void setState(const string& state);
	const string& getZip() const;
	void setZip(const string& zip);
};

#endif /* ADDRESOO_H_ */
