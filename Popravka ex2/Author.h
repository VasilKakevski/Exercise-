/*
 * Author.h
 *
 *  Created on: May 15, 2017
 *      Author: mediff
 */

#ifndef AUTHOR_H_
#define AUTHOR_H_
#include <string>
using namespace std;

class Author {
private:
	string firstname;
	string lastname;
	int rate;
public:
	Author();
	Author(string , string,int);
	void PrintInfo();
	virtual ~Author();
	const string& getFirstname() const;
	void setFirstname(const string& firstname);
	const string& getLastname() const;
	void setLastname(const string& lastname);
	int getRate() const;
	void setRate(int rate);
};

#endif /* AUTHOR_H_ */
