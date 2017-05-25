/*
 * shape.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: mediff
 */

#include "shape.h"
#include <iostream>
using namespace std;



shape::shape(int a, int b, string color) {
	setA(a);
	setB(b);
	setColor(color);
}

void shape::Print() {
	cout<<"first side is" <<getA()<<endl;
	cout<<" Second side is "<<getB()<<endl;
	cout<<"color for figure is " <<getColor()<<endl;
}

shape::~shape() {
	// TODO Auto-generated destructor stub
}

int shape::CalculateArea() {
	return 0;
}

int shape::CalculatePrimeter() {
	return 0;
}
