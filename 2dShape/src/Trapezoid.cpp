/*
 * Trapezoid.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: mediff
 */

#include "Trapezoid.h"



int Trapezoid::getH() const {
	return h;
}

int Trapezoid::CalculateArea() {
	return (getA()+getB())/2*getH();
}

 void Trapezoid::Print() {
	shape::Print();
}

void Trapezoid::setH(int h) {
	this->h = h;
}

Trapezoid::Trapezoid(int a, int b, string color, int h)
:shape(a,b,color)
{
	setH(h);
}

Trapezoid::~Trapezoid() {
	// TODO Auto-generated destructor stub
}

