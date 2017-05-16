/*
 * Tools.h
 *
 *  Created on: May 16, 2017
 *      Author: kakev
 */

#ifndef TOOLS_H_
#define TOOLS_H_
#include <string>
using namespace std;
class Tools {
private:
	int number;
	string name;
	int prize;
public:
	Tools(int=0,string="A",int=0);
	virtual ~Tools();
	const string& getName() const;
	void setName(const string& name);
	int getNumber() const;
	void setNumber(int number);
	int getPrize() const;
	void setPrize(int prize);
};

#endif /* TOOLS_H_ */
