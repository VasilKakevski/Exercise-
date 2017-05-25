/*
 * AddresOO.cpp
 *
 *  Created on: May 3, 2017
 *      Author: mediff
 */

#include "AddresOO.h"
#include <iostream>
#include <iomanip>
using namespace std;
AddresOO::AddresOO() {
	// TODO Auto-generated constructor stub

}

const string& AddresOO::getCity() const {
	return city;
}

void AddresOO::setCity(const string& city) {
	this->city = city;
}

const string& AddresOO::getCountry() const {
	return country;
}

void AddresOO::setCountry(const string& country) {
	this->country = country;
}

const string& AddresOO::getNumber() const {
	return number;
}

void AddresOO::setNumber(const string& number) {
	this->number = number;
}

const string& AddresOO::getState() const {
	return state;
}

void AddresOO::setState(const string& state) {
	this->state = state;
}

const string& AddresOO::getZip() const {
	return zip;
}

void AddresOO::setZip(const string& zip) {
	this->zip = zip;
}

AddresOO::~AddresOO() {
	// TODO Auto-generated destructor stub
}
ostream &operator<<(ostream &output, AddresOO& adres)
{
	//sofia - bg - mladost 2 post
	output<<adres.city<<" : " <<adres.country<<" - "<<adres.state<<" - "<<adres.number<<" "<<adres.zip;

	return output;

}
istream &operator>>(istream &input, AddresOO& adres)
// 1000 bg - sofia : Mlados #2
{
input >>setw(4)>>adres.zip;
input.ignore(1);// " "
input>>setw(2)>>adres.country;//" Bg
input.ignore(3); // " - "
input>>setw(10)>>adres.city;
input.ignore(3);
input>>setw(16)>>adres.state;
input.ignore(3);
input>>setw(5)>>adres.number;

return input;
}
