/*
 * Athlets.h
 *
 *  Created on: May 5, 2017
 *      Author: mediff
 */

#ifndef ATHLETS_H_
#define ATHLETS_H_
#include "BestAch.h"
#include <string>
using namespace std;
class Athlets {
private:
	string name;
	string family;
	string nationality;
	BestAch &bAch;

public:
	Athlets(string , string ,string , BestAch&);
	void PrintInfo();
	virtual ~Athlets();
	const string& getFamily() const;
	void setFamily(const string& family);
	const string& getName() const;
	void setName(const string& name);
	const string& getNationality() const;
	void setNationality(const string& nationality);
};

#endif /* ATHLETS_H_ */
