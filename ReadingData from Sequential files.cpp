//============================================================================
// Name        : ReadingData.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

enum RequestType{ZERO_BALANCE=1,CREDIT_BALANCE,DEBIT_BALANCE,END};
bool shouldDispley(int,double);
int getRequest();
void outputLine(int, string,double);
int main() {
	ifstream inClient("data.dat",ios::in);
	if(!inClient){
		cerr<<"file could not be opened";
			exit(1);
			}
	int request;
	int accountNumber;
	string name;
	double balance;
request=getRequest();
while(request!=END){
	switch(request){
	case ZERO_BALANCE:cout<<"account with zero balance";
	break;
	case CREDIT_BALANCE:cout<<"account with credit balance";
	break;
	case DEBIT_BALANCE:cout<<"account with debit balance";
	break;


	}
while(!inClient.eof())
	{
	if(shouldDispley(request,balance))
		outputLine(accountNumber,name,balance);

inClient>>accountNumber>>name>>balance;
	}
inClient.clear();
inClient.seekg(0);
request=getRequest();
}

cout<<"End of run"<<endl;

return 0;
}



bool shouldDispley(int type,double balance){

	 if ( type == ZERO_BALANCE && balance == 0 )
	 return true;


	 if ( type == CREDIT_BALANCE && balance < 0 )
	 return true;


	  if( type == DEBIT_BALANCE && balance > 0 )
	 return true;


	  return false;
}
void outputLine(int accountNumber, string name ,double balance){
cout<<left<<setw(10)<<accountNumber<<setw(15)<<name<<setw(15)
		<<setprecision(2)<<balance<<endl;
}
int getRequest(){
	int request;
	cout << "\nEnter request" << endl
	<< " 1 - List accounts with zero balances" << endl
	 << " 2 - List accounts with credit balances" << endl
	 << " 3 - List accounts with debit balances" << endl
	 << " 4 - End of run" << fixed << showpoint;

	 do
	{
	 cout << "\n? ";
	cin >> request;
	 } while ( request < ZERO_BALANCE && request > END );

	return request;
}
