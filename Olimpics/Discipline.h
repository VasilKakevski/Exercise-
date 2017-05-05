/*
 * Discipline.h
 *
 *  Created on: May 5, 2017
 *      Author: mediff
 */

#ifndef DISCIPLINE_H_
#define DISCIPLINE_H_
#include <string>
#include "BestAch.h"
using namespace std;

class Discipline {
private:
	string discname;
	BestAch& worldrecord;//using class bestAch to initialize worldrecord
	BestAch& racerecord;//using class BestAch to initialize racerecord


public:
	Discipline(string, BestAch&,BestAch&);
	void PrintInfo();

	virtual ~Discipline();
	const string& getDiscname() const;
	void setDiscname(const string& discname);
};

#endif /* DISCIPLINE_H_ */
