//============================================================================
// Name        : Zapazvane.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Car.h"
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {

	ofstream outCar("car.dat",ios::binary);
	if(!outCar){
		cerr<<"file could not be opende ";
		exit(1);
	}
	Car blankcar;
	for(int i=0;i<100;i++){
		outCar.write(reinterpret_cast<const char*>(&blankcar),sizeof(Car));
	}
	return 0;
}
