/*
 * Book.h
 *
 *  Created on: May 15, 2017
 *      Author: mediff
 */

#ifndef BOOK_H_
#define BOOK_H_
#include "Author.h"
#include <string>
using namespace std;
class Book {
private:
	string name;
	string janr;
	Author author;
	int isbn;
public:
	Book();
	Book(string ,string ,Author&,int);
	virtual ~Book();
	void Print();
	const Author& getAuthor() const;
	void setAuthor(const Author& author);
	const string& getJanr() const;
	void setJanr(const string& janr);
	const string& getName() const;
	void setName(const string& name);
	int getIsbn() const;
	void setIsbn(int isbn);
};

#endif /* BOOK_H_ */
