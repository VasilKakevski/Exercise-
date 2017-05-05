/*
 * Discipline.cpp
 *
 *  Created on: May 5, 2017
 *      Author: mediff
 */
#include "BestAch.h"
#include "Discipline.h"
#include <iostream>
using namespace std;
Discipline::Discipline(string discname, BestAch& worldrecord,BestAch &racerecord)
:worldrecord(worldrecord),racerecord(racerecord){
setDiscname(discname);

}

const string& Discipline::getDiscname() const {
	return discname;
}

void Discipline::PrintInfo() {
	cout<<" discipline name " <<getDiscname();
			worldrecord.PrintInfo();
			racerecord.PrintInfo();
}

void Discipline::setDiscname(const string& discname) {
	this->discname = discname;
}

Discipline::~Discipline() {
	// TODO Auto-generated destructor stub
}

