/*
 * Triangle.h
 *
 *  Created on: May 15, 2017
 *      Author: mediff
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include <iostream>
using namespace std;

class Triangle {

	friend istream& operator >>(istream& in ,Triangle& tr);
			friend ostream& operator <<(ostream& out, Triangle& tr);
private:
	int a;
	int b;
	int c;
	int h;
public:

	bool  operator == (Triangle&);
	bool operator !=(Triangle&);
	Triangle(int=0 ,int=0,int=0,int=0);
	virtual ~Triangle();
	int getA() const;
	void setA(int a);
	int getB() const;
	void setB(int b);
	int getC() const;
	void setC(int c);
	int getH() const;
	void setH(int h);
};

#endif /* TRIANGLE_H_ */
