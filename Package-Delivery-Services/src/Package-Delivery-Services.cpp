//============================================================================
// Name        : Package-Delivery-Services.cpp
// Author      : vasil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "AddresReciver.h"
#include "Package1.h"
#include <vector>
#include "AddresSender.h"
#include "AddresOO.h"
int main() {
	AddresReciver *ar= new AddresReciver("Vasil","Varna 92a","Bankia","Sofia",1320,20);
	AddresSender as("Vasil","Varna 92a","Bankia","Sofia",1320);
	ar->PrintInfo();
	Package1 p1(5,6,as,*ar);
	vector<Package1>vectorOfPackage;
vectorOfPackage.push_back(p1);
for(int unsigned  i=0;i<vectorOfPackage.size();i++){
vectorOfPackage[i].PrintInfo();
}
AddresOO myAdres;
cin>>myAdres;
cout<<myAdres;
	return 0;
}
