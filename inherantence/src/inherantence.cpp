//============================================================================
// Name        : inherantence.cpp
// Author      : vasil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Adress.h"
#include "Manager.h"
#include "Expert1.h"
#include "JuniorExpert.h"
#include <vector>
using namespace std;

int main() {
Adress adressesVasio(1320,"bankia","bulgaria");
	//Expert1 e1("vasil","Kakevski","Programing",10,5,0);
	Manager manager("Vasil","kakevski","Manger",10,5,adressesVasio);
	//e1.Print();
JuniorExpert j1("Vasil","kakevski","Junior",10,5,0,adressesVasio,"Programing","Programing","Yes");
j1.Print();
//manager.setHour(150);
vector<Expert1>vec;

//manager.Print();



	return 0;
}
