//============================================================================
// Name        : Popravka.cpp
// Author      : vasil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iostream>
#include "Author.h"
#include "Book.h"
#include <vector>

using namespace std;
vector<Book>otherbooks;
int main() {
	vector<Book*>books;

	Author auth1("Vasil","Kakevski",2);
	Author auth2("Bobi","Ivanov",1);
	Book book12("Memo","Drama",auth1,99902);
	Book book21("Memo","Drama",auth2,99902);

	return 0;
}
void AddBooksToVector(Book book){
	if(otherbooks.size()==0){
		otherbooks.push_back(book);
	}
	for(unsigned int i=0;i<otherbooks.size();i++){
		if(otherbooks[i].getIsbn()==book.getIsbn()){
			return;
		}
	}
	otherbooks.push_back(book);
}
void SearchBookByName(string name){
	for(unsigned int i=0;i<otherbooks.size();i++){
		if(otherbooks[i].getName()==name){
			otherbooks[i].Print();
		}
	}
}
void Statistics(){
	int countjar1=0;
	int countjar2=0;
	int countjar3=0;
	int countjar4=0;
	for(unsigned int i=0;i<otherbooks.size();i++){
		i
	}
}
