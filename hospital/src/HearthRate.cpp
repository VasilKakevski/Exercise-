/*
 * HearthRate.cpp
 *
 *  Created on: Apr 6, 2017
 *      Author: mediff
 */

#include "HearthRate.h"
#include <iostream>
using namespace std;

HearthRate::HearthRate(string firstname,string lastname,int day, string mounth,int year,int hearthrate) {
	this->firstname=firstname;
	this->lastname=lastname;
	this->day=day;
	this->month=mounth;
	this->year=year;
	this->hearthrate=hearthrate;

}

int HearthRate::getDay() const {
	return day;
}

void HearthRate::setDay(int day) {
	this->day = day;
}

const string& HearthRate::getFirstname() const {
	return firstname;
}

void HearthRate::setFirstname(const string& firstname) {
	this->firstname = firstname;
}

const string& HearthRate::getLastname() const {
	return lastname;
}

void HearthRate::setLastname(const string& lastname) {
	this->lastname = lastname;
}

const string& HearthRate::getMonth() const {
	return month;
}

void HearthRate::setMonth(const string& mounth) {
	this->month = month;
}

int HearthRate::getYear() const {
	return year;
}

void HearthRate::setYear(int year) {
	this->year = year;
}

HearthRate::~HearthRate() {
	// TODO Auto-generated destructor stub
}

HearthRate::HearthRate() {
	this->firstname="null";
	this->lastname="null";
	this->day=0;
	this->month="January";
	this->year=2017;
	this->hearthrate=0;
}

int HearthRate::getHearthrate() const {
	return hearthrate;
}

void HearthRate::setHearthrate(int hearthrate) {
	this->hearthrate = hearthrate;
}

int HearthRate::getAge() {
	return 2017-year;
}

int HearthRate::getMaximumHearthrate() {
	int age;
	int agePatient=getAge();
	if(agePatient>=20 && agePatient<25 ){
		age = 200;
	}if(agePatient>=25 && agePatient<30){
		age=190;
	}
	return age;

}
