/*
 * Operations.h
 *
 *  Created on: May 16, 2017
 *      Author: kakev
 */

#ifndef OPERATIONS_H_
#define OPERATIONS_H_
#include <fstream>
#include "Tools.h"

using namespace std;


const char* path="C:\\Users\\kakev\\Downloads\\eclipse\\workspace\\AllinOne\\tool.dat";
class Operations {
private:

	fstream file;
public:
	Operations(const char*);
	virtual ~Operations();
	int getNumber();
	void inputTools();
	void updateTools();
	void deleteTools();
	void outputLine( fstream&, const Tools & );

};

#endif /* OPERATIONS_H_ */
