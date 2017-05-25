//============================================================================
// Name        : 2dShape.cpp
// Author      : vasil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Rectangle.h"
#include "Trapezoid.h"
#include "Triangle.h"
#include <vector>
using namespace std;

int main() {
	Rectangle r1(2,5,"blue");
	//cout<<r1.CalculateArea();
	Triangle t1(3,5,"red",5);
	//cout<<t1.CalculateArea();
	Trapezoid tra1(3,5,"orange",10);
	vector<shape*>vshape;
vshape.push_back(&r1);
vshape.push_back(&t1);

vshape.push_back(&tra1);
for(unsigned int i=0;i<vshape.size();i++){
	cout<<vshape[i]->CalculateArea()<<endl;

}
	return 0;
}
