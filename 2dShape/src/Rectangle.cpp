/*
 * Rectangle.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: mediff
 */

#include "Rectangle.h"
#include "shape.h"


Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
}

Rectangle::Rectangle(int a, int b, string color)
:shape(a,b,color)
{
}

int Rectangle::CalculateArea() {
	return (getA()*getB());
}

void Rectangle::Pritn() {
	shape::Print();
}
