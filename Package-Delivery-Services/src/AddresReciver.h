/*
 * AddresReciver.h
 *
 *  Created on: Apr 28, 2017
 *      Author: mediff
 */

#ifndef ADDRESRECIVER_H_
#define ADDRESRECIVER_H_
#include <string>
using namespace std;
class AddresReciver {
private:
	string name;
	string addres;
	string city;
	string state;
	int zip;
	int payment;
public:
	AddresReciver(string="a",string="a",string="A",string="A",int=0,int=0);
	void PrintInfo();
	virtual ~AddresReciver();
	const string& getAddres() const;
	void setAddres(const string& addres);
	const string& getCity() const;
	void setCity(const string& city);
	const string& getName() const;
	void setName(const string& name);
	const string& getState() const;
	void setState(const string& state);
	int getZip() const;
	void setZip(int zip);
	int getPayment() const;
	void setPayment(int payment);
};

#endif /* ADDRESRECIVER_H_ */
