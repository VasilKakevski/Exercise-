//============================================================================
// Name        : File.cpp
// Author      : vasil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//string , string ,int
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <vector>
using namespace std;

//We need to read and read from file
//we need to sum tha egn , and put them in vector
int main() {
	ofstream ourClientFile("name.dat",ios::out);
	ifstream read("C:\\Users\\mediff\\Documents\\File\\name.txt.txt",ios::in);

	if(!read){
		cerr<<"cant read the file"<<endl;
		exit(1);
	}
	if(!ourClientFile){
		cerr<<"File cannot be opened"<<endl;
		exit(1);
	}
	cout<<"Enter name lastname and EGN"<<endl;
		cout<<"enter end of file to end input.\n?";
		string name;
		string lastname;
		int egn;
		vector<int>egns;
		while(cin>>name>>lastname>>egn){
			ourClientFile<<name<<" "<<lastname<<" "<<egn<<endl;
		cout<<"?";

		}
		int sum=0;
while(read>>name>>lastname>>egn){
	sum+=egn;
	egns.push_back(egn);
	cout<<name<<" "<<lastname<<" "<<egn<<endl;
}
read.close();
for(unsigned int i=0;i<egns.size();i++)
	cout<<egns[i]<<endl;
cout<<sum;
	return 0;
}
