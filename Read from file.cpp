//============================================================================
// Name        : Read.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
using namespace std;
void outputLine(const string ,const string addres,double );



int main() {
	ifstream inDataFile("data.dat",ios::in);
	if(!inDataFile){
		cerr<<"File could not be opened"<<endl;
				exit(1);
	}
	string name;
	string addres;
	double balance;
	cout<<left<<setw(10)<<"Name"<<setw(13)<<"Addres"<<"Balace"<<endl<<fixed<<showpoint;
	while(inDataFile>>name>>addres>>balance)
		outputLine(name,addres,balance);
	return 0;
}
void outputLine(const string name,const string addres,double balance){
	cout<<left<<setw(10)<<name<<setw(13)<<addres
			<<setw(15)<<setprecision(2)<<setw(15)<<balance<<endl;
}
