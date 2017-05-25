/*
 * Expert1.h
 *
 *  Created on: Apr 21, 2017
 *      Author: mediff
 */

#ifndef EXPERT1_H_
#define EXPERT1_H_

#include "Manager.h"
#include <string>
using namespace std;
class Expert1: public Manager {
public:
	Expert1();
	Expert1(string,string,string,int,int,int,Adress&);
	void Print();
	int Earning();
	virtual ~Expert1();
	int getBonus() const;
	void setBonus(int bonus);

private:
	int bonus;
};

#endif /* EXPERT1_H_ */
