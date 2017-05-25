/*
 * Expert.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: mediff
 */

#include "Expert.h"
#include <iostream>
using namespace std;


int Expert::getBonus() const {
	return bonus;
}

void Expert::setBonus(int bonus) {
	this->bonus = bonus;
}

const string& Expert::getDepartment() const {
	return department;
}

void Expert::setDepartment(const string& department) {
	this->department = department;
}

const string& Expert::getFirstname() const {
	return firstname;
}

void Expert::setFirstname(const string& firstname) {
	this->firstname = firstname;
}

int Expert::getHour() const {
	return hour;
}

void Expert::setHour(int hour) {
	this->hour = hour;
}

const string& Expert::getLastname() const {
	return lastname;
}

void Expert::setLastname(const string& lastname) {
	this->lastname = lastname;
}

int Expert::getSalaryPerHour() const {
	return salaryPerHour;
}

Expert::Expert(string firstname, string lastname, string department, int salaryPerHour,
		int hour, int bonus) {
	setFirstname(firstname);
	setLastname(lastname);
	setDepartment(department);
	setSalaryPerHour(salaryPerHour);
	setHour(0);
	setBonus(0);
}

int Expert::Earnings() {
	return getSalaryPerHour()*getHour()+getBonus();
}

void Expert::Pritn() {
	cout<<" "<<getFirstname()<<endl;
	cout<<" "<<getLastname()<<endl;
	cout<<" "<<getDepartment()<<endl;
	cout<<" "<<getSalaryPerHour()<<endl;
	cout<<" "<<getHour()<<endl;
	cout<<" "<<getBonus()<<endl;

}

void Expert::setSalaryPerHour(int salaryPerHour) {
	this->salaryPerHour = salaryPerHour;
}

Expert::~Expert() {
	// TODO Auto-generated destructor stub
}

