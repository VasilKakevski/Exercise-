/*
 * Tools.cpp
 *
 *  Created on: May 16, 2017
 *      Author: kakev
 */

#include "Tools.h"

Tools::Tools(int number,string name,int prize) {
	setNumber(number);
	setName(name);
	setPrize(prize);

}

const string& Tools::getName() const {
	return name;
}

void Tools::setName(const string& name) {
	this->name = name;
}

int Tools::getNumber() const {
	return number;
}

void Tools::setNumber(int number) {
	this->number = number;
}

int Tools::getPrize() const {
	return prize;
}

void Tools::setPrize(int prize) {
	this->prize = prize;
}

Tools::~Tools() {
	// TODO Auto-generated destructor stub
}

