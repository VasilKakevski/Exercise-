/*
 * Adress.cpp
 *
 *  Created on: Apr 19, 2017
 *      Author: mediff
 */

#include "Adress.h"
#include <iostream>
using namespace std;


Adress::Adress(int postcode , string town, string country) {
	this->postcode=postcode;
	this->town=town;
	this->country=country;

}

const string& Adress::getCountry() const {
	return country;
}

void Adress::setCountry(const string& country) {
	this->country = country;
}

int Adress::getPostcode() const {
	return postcode;
}

void Adress::setPostcode(int postcode) {
	this->postcode = postcode;
}

const string& Adress::getTown() const {
	return town;
}

void Adress::setTown(const string& town) {
	this->town = town;
}

void Adress::PrintInfo() {
	cout<<"post code "<<this->getPostcode()<<endl;
	cout<<"Town "<<this->getTown()<<endl;
	cout<<"Country :"<<this->getCountry()<<endl;
}

Adress::~Adress() {
	// TODO Auto-generated destructor stub
}

