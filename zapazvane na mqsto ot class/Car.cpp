/*
 * Car.cpp
 *
 *  Created on: May 16, 2017
 *      Author: kakev
 */

#include "Car.h"

Car::Car(string name,string color,int price) {
	setName(name);
	setColor(color);
	setPrice(price);
}

const string& Car::getColor() const {
	return color;
}

void Car::setColor(const string& color) {
	this->color = color;
}

const string& Car::getName() const {
	return name;
}

void Car::setName(const string& name) {
	this->name = name;
}

int Car::getPrice() const {
	return price;
}

void Car::setPrice(int price) {
	this->price = price;
}

Car::~Car() {
	// TODO Auto-generated destructor stub
}

