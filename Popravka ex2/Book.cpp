/*
 * Book.cpp
 *
 *  Created on: May 15, 2017
 *      Author: mediff
 */

#include "Book.h"
#include <iostream>
using namespace std;

Book::Book():author() {
	setName("");
	setJanr("a");
	setIsbn(0);


}

const Author& Book::getAuthor() const {
	return author;
}

void Book::setAuthor(const Author& author) {
	this->author = author;
}

const string& Book::getJanr() const {
	return janr;
}

void Book::setJanr(const string& janr) {
	this->janr = janr;
}

const string& Book::getName() const {
	return name;
}

void Book::setName(const string& name) {
	this->name = name;
}

int Book::getIsbn() const {
	return isbn;
}

Book::Book(string name, string janr, Author&author,int isbn ):author(author) {
	setName(name);
	setJanr(janr);
	setIsbn(isbn);
}

void Book::Print() {
	author.PrintInfo();
	cout<<getName()<<" "<<getJanr()<<" "<< getIsbn()<<endl;
}

void Book::setIsbn(int isbn) {
	this->isbn = isbn;
}

Book::~Book() {
	// TODO Auto-generated destructor stub
}

