/*
 * Athlets.cpp
 *
 *  Created on: May 5, 2017
 *      Author: mediff
 */

#include "Athlets.h"
#include <iostream>
using namespace std;


Athlets::Athlets(string name, string family, string nationality,
		BestAch& bAch):bAch(bAch) {
	setName(name);
	setFamily(family);
	setNationality(nationality);

}

const string& Athlets::getFamily() const {
	return family;
}

void Athlets::setFamily(const string& family) {
	this->family = family;
}

const string& Athlets::getName() const {
	return name;
}

void Athlets::setName(const string& name) {
	this->name = name;
}

const string& Athlets::getNationality() const {
	return nationality;
}

void Athlets::PrintInfo() {
	cout<<" name "<<getName()<<" family "<<getFamily()<<" nationality "<<getNationality();
}

void Athlets::setNationality(const string& nationality) {
	this->nationality = nationality;
}

Athlets::~Athlets() {
	// TODO Auto-generated destructor stub
}

