/*
 * Triangle.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: mediff
 */

#include "Triangle.h"
#include "shape.h"

int Triangle::getC() const {
	return c;
}

void Triangle::Print() {
	shape::Print();
}

int Triangle::CalculateArea() {
	return (getA()*getB())/2;
}

void Triangle::setC(int c) {
	this->c = c;
}

Triangle::Triangle(int a, int b, string color, int c)
:shape(a,b,color)

{
	setC(c);
}

Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

