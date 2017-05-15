/*
 * Author.cpp
 *
 *  Created on: May 15, 2017
 *      Author: mediff
 */

#include "Author.h"
#include <iostream>
using namespace std;

Author::Author() {
	setFirstname("a");
	setLastname("b");
	setRate(0);
}

Author::~Author() {
	// TODO Auto-generated destructor stub
}

const string& Author::getFirstname() const {
	return firstname;
}

void Author::setFirstname(const string& firstname) {
	this->firstname = firstname;
}

const string& Author::getLastname() const {
	return lastname;
}

void Author::setLastname(const string& lastname) {
	this->lastname = lastname;
}

int Author::getRate() const {
	return rate;
}

Author::Author(string firstname, string lastname, int rate) {
	setFirstname(firstname);
	setLastname(lastname);
	setRate(rate);
}

void Author::PrintInfo() {
	cout<<" "<<getFirstname()<<" "<< getLastname()<<" "<<getRate()<<endl;
}

void Author::setRate(int rate) {
	this->rate = rate;
}
