/*
 * shape.h
 *
 *  Created on: Apr 21, 2017
 *      Author: mediff
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#include <string>
using  namespace std;
class shape {
private:
	int a;
	int b;
	string color;
public:
	shape(int , int ,string);
	virtual void Print();
	virtual int CalculateArea();
	int CalculatePrimeter();
	virtual ~shape();

	int getA() const {
		return a;
	}

	void setA(int a) {
		this->a = a;
	}

	int getB() const {
		return b;
	}

	void setB(int b) {
		this->b = b;
	}

	const string& getColor() const {
		return color;
	}

	void setColor(const string& color) {
		this->color = color;
	}
};

#endif /* SHAPE_H_ */
