/*
 * JuniorExpert.cpp
 *
 *  Created on: Apr 24, 2017
 *      Author: mediff
 */

#include "JuniorExpert.h"
#include "Expert1.h"
JuniorExpert::JuniorExpert(string firstname,string lastname,string department
		,int salaryPerHour,int hour,int bonus,Adress& adr,string technologies,
		string degree,string oppinion) {
setDegree(degree);
setOppinion(oppinion);

}

const string& JuniorExpert::getDegree() const {
	return degree;
}

void JuniorExpert::setDegree(const string& degree) {
	this->degree = degree;
}

const string& JuniorExpert::getOppinion() const {
	return oppinion;
}

int JuniorExpert::CalculateSalary() {
	int salary;
	if(getOppinion()=="Yes"){

	salary=Expert1::getSalaryPerHour()*Expert1::getHour()+Expert1::getBonus();
	}
	return salary;
}

void JuniorExpert::setOppinion(const string& oppinion) {
	this->oppinion = oppinion;
}

JuniorExpert::~JuniorExpert() {
	// TODO Auto-generated destructor stub
}

