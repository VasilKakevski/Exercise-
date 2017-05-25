/*
 * JuniorExpert.h
 *
 *  Created on: Apr 24, 2017
 *      Author: mediff
 */

#ifndef JUNIOREXPERT_H_
#define JUNIOREXPERT_H_

#include "Expert1.h"


class JuniorExpert: public Expert1 {
private:
	string degree;
	string oppinion;
public:
	JuniorExpert(string,string,string,int,int,int,Adress&,string,string,string);
	virtual ~JuniorExpert();
	int CalculateSalary();
	const string& getDegree() const;
	void setDegree(const string& degree);
	const string& getOppinion() const;
	void setOppinion(const string& oppinion);
};

#endif /* JUNIOREXPERT_H_ */
