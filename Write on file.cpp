//============================================================================
// Name        : Write.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <fstream>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	ofstream ourClient("data.dat",ios::app);
	if(!ourClient){
		cerr<<"FIle could not be open";
				exit(1);
	}
	cout<<"Enter name,addres,Balance"<<endl
			<<"enter end-of=file to end input.\n?";
	string name;
	string addres;
	double balance;
	while(cin>>name>>addres>>balance){
		ourClient<<name<<" "<<addres<<" "<<balance<<endl;
		cout<<"?";
	}

	return 0;
}
