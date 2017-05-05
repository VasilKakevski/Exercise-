/*
 * BestAch.cpp
 *
 *  Created on: May 5, 2017
 *      Author: mediff
 */

#include "BestAch.h"
#include <iostream>
using namespace std;



BestAch::~BestAch() {
	// TODO Auto-generated destructor stub
}

int BestAch::getHour() const {
	return hour;
}

void BestAch::setHour(int hour) {
	this->hour = hour;
}

int BestAch::getMiliseconds() const {
	return miliseconds;
}

void BestAch::setMiliseconds(int miliseconds) {
	this->miliseconds = miliseconds;
}

int BestAch::getMinutes() const {
	return minutes;
}

void BestAch::setMinutes(int minutes) {
	this->minutes = minutes;
}

int BestAch::getSeconds() const {
	return seconds;
}

void BestAch::setSeconds(int seconds) {
	this->seconds = seconds;
}

BestAch::BestAch(int hour, int minutes, int seconds, int miliseconds) {
	setHour(hour);
	setMinutes(minutes);
	setSeconds(seconds);
	setMiliseconds(miliseconds);
}

void BestAch::PrintInfo() {
	cout<<"Hour "<<getHour()<<" Minutes "<<getMinutes()<<" seconds "<<getSeconds()
			<<"miliseconds "<<getMiliseconds()<<endl;
}
