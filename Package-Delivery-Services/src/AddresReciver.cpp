/*
 * AddresReciver.cpp
 *
 *  Created on: Apr 28, 2017
 *      Author: mediff
 */

#include "AddresReciver.h"
#include <iostream>
using namespace std;



const string& AddresReciver::getAddres() const {
	return addres;
}

void AddresReciver::setAddres(const string& addres) {
	this->addres = addres;
}

const string& AddresReciver::getCity() const {
	return city;
}

void AddresReciver::setCity(const string& city) {
	this->city = city;
}

const string& AddresReciver::getName() const {
	return name;
}

void AddresReciver::setName(const string& name) {
	this->name = name;
}

const string& AddresReciver::getState() const {
	return state;
}

void AddresReciver::setState(const string& state) {
	this->state = state;
}

int AddresReciver::getZip() const {
	return zip;
}

AddresReciver::AddresReciver(string name, string addres,
		string city, string state, int zip,int payment) {
	setName(name);
	setAddres(addres);
	setCity(city);
	setState(state);
	setZip(zip);
	setPayment(payment);
}

int AddresReciver::getPayment() const {
	return payment;
}

void AddresReciver::PrintInfo() {
	cout<<" "<<getName()<<endl;
	cout<<" "<<getAddres()<<endl;
	cout<<" "<<getCity()<<endl;
	cout<<" "<<getState()<<endl;
	cout<<" "<<getZip()<<endl;
	cout<<" "<<getPayment()<<endl;

}

void AddresReciver::setPayment(int payment) {
	this->payment = payment;
}

void AddresReciver::setZip(int zip) {
	this->zip = zip;
}

AddresReciver::~AddresReciver() {
	// TODO Auto-generated destructor stub
}

