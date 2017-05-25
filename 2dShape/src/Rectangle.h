/*
 * Rectangle.h
 *
 *  Created on: Apr 21, 2017
 *      Author: mediff
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "shape.h"

class Rectangle: public shape {
public:
	Rectangle(int , int , string);
	int CalculateArea();
	void Pritn();
	virtual ~Rectangle();
};

#endif /* RECTANGLE_H_ */
