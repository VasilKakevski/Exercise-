/*
 * SeniorExpert.cpp
 *
 *  Created on: Apr 24, 2017
 *      Author: mediff
 */

#include "SeniorExpert.h"
#include "Expert1.h"



SeniorExpert::SeniorExpert(string firstname,string lastname,string department
		,int salaryPerHour,int hour,int bonus,Adress& adr,string technologies)
:Expert1(firstname,lastname,department,salaryPerHour,hour,bonus,adr)
{
	setTechnologies(technologies);

}

const string& SeniorExpert::getTechnologies() const {
	return technologies;
}

void SeniorExpert::setTechnologies(const string& technologies) {
	this->technologies = technologies;
}

SeniorExpert::~SeniorExpert() {
	// TODO Auto-generated destructor stub
}

