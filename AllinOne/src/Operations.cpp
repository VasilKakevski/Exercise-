/*
 * Operations.cpp
 *
 *  Created on: May 16, 2017
 *      Author: kakev
 */

#include "Operations.h"
#include <iostream>
#include <iomanip>
using namespace std;
Operations::Operations(const char * path):file(path,ios::binary|ios::in|ios::out) {
	// TODO Auto-generated constructor stub

}

Operations::~Operations() {
	// TODO Auto-generated destructor stub
}

int Operations::getNumber() {
	int toolNumber;

	do{
		cout<<"Enter element from 1-100";
		cin>>toolNumber;
	}while(toolNumber<1 && toolNumber>100);
		return toolNumber;

}

void Operations::inputTools() {
	int toolNumber=getNumber();
	file.seekg((toolNumber-1)*sizeof(Tools));
	Tools tool;
	file.read(reinterpret_cast<char *>(&tool),
			sizeof(Tools));
	if(tool.getNumber()==0)
		{
		int numbertool;
		string nametool;
		int prizetool;
		tool.setNumber(numbertool);
		tool.setName(nametool);

		tool.setPrize(prizetool);
		file.seekp( ( toolNumber - 1 ) * sizeof( Tools ) );
		file.write( reinterpret_cast< const char * >( &tool ),
		 sizeof( Tools ) );

		}else
			cerr<<"Account already contain information";
}

void Operations::updateTools() {
	int toolNumber=getNumber();
	file.seekg((toolNumber-1)*sizeof(Tools));
	Tools tool;
	file.read(reinterpret_cast<char *>(&tool),
			sizeof(Tools));
	if(tool.getNumber()!=0)
	{
		Tools newtool;
		file.seekp((toolNumber-1)*sizeof(Tools));
		file.write(reinterpret_cast<char*>(&newtool),
				sizeof(Tools));

	}
}

void Operations::deleteTools() {
	int toolNumber=getNumber();
	file.seekg((toolNumber-1)*sizeof(Tools));
	Tools tool;
	file.read(reinterpret_cast< char *>(&tool),
			sizeof(Tools));
	if(tool.getNumber()!=0)
			{
		Tools blankTools;
		file.seekp((toolNumber-1)*sizeof(Tools));
		file.write(reinterpret_cast<char*>(&blankTools),
				sizeof(Tools));
		cout<<"account deleted";
			}else
				cerr<<"entry dont exist"<<endl;

}

void Operations::outputLine(fstream& output, const Tools& record) {
	output << left << setw( 10 ) << record.getNumber()
	 << setw( 16 ) << record.getName()

	 << setw( 10 ) << setprecision( 2 ) << setw( 11 ) << record.getPrize()<< right << fixed;

}
