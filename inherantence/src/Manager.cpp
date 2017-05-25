/*
 * Manager.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: mediff
 */

#include "Manager.h"
#include "Adress.h"
#include <iostream>
using namespace std;



const string& Manager::getDepartment() const {
	return department;
}

void Manager::setDepartment(const string& department) {
	this->department = department;
}

const string& Manager::getFirstname() const {
	return firstname;
}

void Manager::setFirstname(const string& firstname) {
	this->firstname = firstname;
}

int Manager::getHour() const {
	return hour;
}

void Manager::setHour(int hour) {
	this->hour = hour;
}

const string& Manager::getLastname() const {
	return lastname;
}

void Manager::setLastname(const string& lastname) {
	this->lastname = lastname;
}

int Manager::getSalaryPerHour() const {
	return salaryPerHour;
}

Manager::Manager(string firstname, string lastname, string department,
		int salaryPerHour, int hour,Adress& adr):adresses(adr){
	setFirstname(firstname);
	setLastname(lastname);
	setDepartment(department);
	setSalaryPerHour(salaryPerHour);
	setHour(0);


}

void Manager::Print() {
	cout<<" "<<getFirstname()<<endl;
	cout<<" "<<getLastname()<<endl;
	cout<<" "<<getDepartment()<<endl;
	cout<<" "<<getSalaryPerHour()<<endl;
	cout<<" "<<getHour()<<endl;
	adresses.PrintInfo();

}

int Manager::Earnings() {
	return getSalaryPerHour()* getHour();
}

void Manager::setSalaryPerHour(int salaryPerHour) {
	this->salaryPerHour = salaryPerHour;
}

Manager::~Manager() {
	// TODO Auto-generated destructor stub
}

Manager::Manager():adresses() {
	setFirstname("a");
	setLastname("a");
	setDepartment("a");
	setSalaryPerHour(1);
	setHour(0);
}
