/*
 * Package1.h
 *
 *  Created on: Apr 28, 2017
 *      Author: mediff
 */

#ifndef PACKAGE1_H_
#define PACKAGE1_H_
#include "AddresReciver.h"
#include "AddresSender.h"
using namespace std;

class Package1 {
private:
	double weight;
		double cost;
		AddresSender adrs;
		AddresReciver adrr;
public:

	Package1(double,double,AddresSender&,AddresReciver&);
	void PrintInfo();
	~Package1();
	int GetPrice();
	double getCost() const;
	void setCost(double cost);
	double getWeight() const;
	void setWeight(double weight);

};

#endif /* PACKAGE1_H_ */
