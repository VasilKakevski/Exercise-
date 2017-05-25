/*
 * AddresSender.cpp
 *
 *  Created on: Apr 28, 2017
 *      Author: mediff
 */

#include "AddresSender.h"
#include <iostream>
using namespace std;



const string& AddresSender::getAddres() const {
	return addres;
}

void AddresSender::setAddres(const string& addres) {
	this->addres = addres;
}

const string& AddresSender::getCity() const {
	return city;
}

void AddresSender::setCity(const string& city) {
	this->city = city;
}

const string& AddresSender::getName() const {
	return name;
}

void AddresSender::setName(const string& name) {
	this->name = name;
}

const string& AddresSender::getState() const {
	return state;
}

void AddresSender::setState(const string& state) {
	this->state = state;
}

int AddresSender::getZip() const {
	return zip;
}

AddresSender::AddresSender(string name, string addres,
		string city, string state, int zip) {
	setName(name);
	setAddres(addres);
	setCity(city);
	setState(state);
	setZip(zip);
}

void AddresSender::PrintInfo() {
	cout<<" "<<getName()<<endl;
	cout<<" "<<getAddres()<<endl;
	cout<<" "<<getCity()<<endl;
	cout<<" "<<getState()<<endl;
	cout<<" "<<getZip()<<endl;
}

void AddresSender::setZip(int zip) {
	this->zip = zip;
}

AddresSender::~AddresSender() {
	// TODO Auto-generated destructor stub
}

