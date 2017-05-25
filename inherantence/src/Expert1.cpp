/*
 * Expert1.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: mediff
 */

#include "Expert1.h"
#include "Manager.h"
#include "Adress.h"


Expert1::~Expert1() {
	// TODO Auto-generated destructor stub
}

int Expert1::getBonus() const {
	return bonus;
}

Expert1::Expert1(string firstname, string lastname, string department,
		int salaryPerHour,int hour, int bonus,Adress& adr )

:Manager(firstname,lastname,department,salaryPerHour,hour,adr)


{
setBonus(bonus);
}


void Expert1::Print() {
	Manager::Print();

	cout<<getBonus();
}

int Expert1::Earning() {
	return getSalaryPerHour()*getHour()+getBonus();
}

Expert1::Expert1() {
	setBonus(0);
}

void Expert1::setBonus(int bonus) {
	this->bonus = bonus;
}
