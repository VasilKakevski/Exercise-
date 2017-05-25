/*
 * AddresSender.h
 *
 *  Created on: Apr 28, 2017
 *      Author: mediff
 */

#ifndef ADDRESSENDER_H_
#define ADDRESSENDER_H_
#include <string>
using namespace std;
class AddresSender {
private:
	string name;
	string addres;
	string city;
	string state;
	int zip;
public:
	AddresSender(string="a",string="a",string="A",string="A",int=0);
	void PrintInfo();
	virtual ~AddresSender();
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
};

#endif /* ADDRESSENDER_H_ */
