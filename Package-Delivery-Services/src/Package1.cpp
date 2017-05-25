/*
 * Package1.cpp
 *
 *  Created on: Apr 28, 2017
 *      Author: mediff
 */
#include "AddresSender.h"
#include "Package1.h"
#include "AddresReciver.h"
#include "AddresSender.h"
#include <iostream>
using namespace std;

Package1::Package1(double weight,double cost,AddresSender& sender,AddresReciver& reciver)
:adrs(sender),adrr(reciver){
	setWeight(weight);
	setCost(cost);
	}



double Package1::getCost() const {
return cost;
}

void Package1::setCost(double cost) {
this->cost = cost;
}

double Package1::getWeight() const {
return weight;
}

int Package1::GetPrice() {
	int price=getCost()*getWeight();
			return price;
}

void Package1::setWeight(double weight) {
this->weight = weight;
}

Package1::~Package1() {
	// TODO Auto-generated destructor stub
}

void Package1::PrintInfo() {
	cout<<" "<<getCost();
	cout<<" "<<getWeight();
	adrs.PrintInfo();
	adrr.PrintInfo();

}
