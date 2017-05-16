/*
 * Car.h
 *
 *  Created on: May 16, 2017
 *      Author: kakev
 */

#ifndef CAR_H_
#define CAR_H_
#include <string>
using namespace std;
class Car {
private:
	string name;
	string color;
	int price;
public:
	Car(string="а" ,string="а" ,int=1);
	virtual ~Car();
	const string& getColor() const;
	void setColor(const string& color);
	const string& getName() const;
	void setName(const string& name);
	int getPrice() const;
	void setPrice(int price);
};

#endif /* CAR_H_ */
