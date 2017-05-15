/*
 * Triangle.cpp
 *
 *  Created on: May 15, 2017
 *      Author: mediff
 */

#include "Triangle.h"


Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}
ostream& operator <<(ostream& out, Triangle& tr){
	out<<tr.a<<","<<tr.b<<","<<tr.c<<","<<tr.h<<endl;
	return out;
}
istream& operator >>(istream& in ,Triangle& tr){
	in>> tr.a;
	in.ignore(1);
	in>>tr.b;
	in.ignore(1);
	in>>tr.c;
	in.ignore(1);
	in>>tr.h;
	return in;
}
bool Triangle::operator ==(Triangle& right) {
	if(this->a==right.a && this->b==right.b && this->c==right.c && this->h==right.h )
		return true;
	return false;

}

bool Triangle::operator !=(Triangle& right) {
	if(this->a!=right.a && this->b!=right.b && this->c!=right.c && this->h!=right.h )
			return true;
		return false;
}

int Triangle::getA() const {
	return a;
}

void Triangle::setA(int a) {
	this->a = a;
}

int Triangle::getB() const {
	return b;
}

void Triangle::setB(int b) {
	this->b = b;
}

int Triangle::getC() const {
	return c;
}

void Triangle::setC(int c) {
	this->c = c;
}

int Triangle::getH() const {
	return h;
}

void Triangle::setH(int h) {
	this->h = h;
}

Triangle::Triangle(int a, int b, int c, int h) {
	setA(a);
	setB(b);
	setC(c);
	setH(h);
}
