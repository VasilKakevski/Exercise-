/*
 * Triangle.h
 *
 *  Created on: Apr 21, 2017
 *      Author: mediff
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "shape.h"

class Triangle: public shape {
private:
	int c;
public:
	Triangle(int ,int,string,int);
	int CalculateArea();
	void Print();
	virtual ~Triangle();
	int getC() const;
	void setC(int c);
};

#endif /* TRIANGLE_H_ */
