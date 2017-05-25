/*
 * Trapezoid.h
 *
 *  Created on: Apr 21, 2017
 *      Author: mediff
 */

#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "shape.h"

class Trapezoid: public shape {
private:
	int h;
public:
	Trapezoid(int ,int,string,int);
	 void Print();
	int CalculateArea();

	virtual ~Trapezoid();
	int getH() const;
	void setH(int h);
};

#endif /* TRAPEZOID_H_ */
