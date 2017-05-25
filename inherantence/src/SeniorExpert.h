/*
 * SeniorExpert.h
 *
 *  Created on: Apr 24, 2017
 *      Author: mediff
 */

#ifndef SENIOREXPERT_H_
#define SENIOREXPERT_H_

#include "Expert1.h"
#include "Adress.h"

class SeniorExpert: public Expert1 {
	string technologies;
public:
	SeniorExpert();
	SeniorExpert(string,string,string,int,int,int,Adress&,string);
	virtual ~SeniorExpert();
	const string& getTechnologies() const;
	void setTechnologies(const string& technologies);
};

#endif /* SENIOREXPERT_H_ */
