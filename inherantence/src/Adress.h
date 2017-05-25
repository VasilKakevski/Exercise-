

#ifndef ADRESS_H_
#define ADRESS_H_
#include <string>
using namespace std;
class Adress {
private:
	int postcode;
	string town;
	string country;
public:

	Adress(int=0 , string="a" , string="a");
	void PrintInfo();
	virtual ~Adress();
	const string& getCountry() const;
	void setCountry(const string& country);
	int getPostcode() const;
	void setPostcode(int postcode);
	const string& getTown() const;
	void setTown(const string& town);
};

#endif /* ADRESS_H_ */
