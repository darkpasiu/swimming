// person.h
#ifndef PERSON
#define PERSON

#include <iostream>

using namespace std;

class CPerson {
	
	private:
	string m_szName;
	string m_szSurname;
	unsigned int m_uiYear;

 	public:
	/* SET */
	void setName(string);
	void setSurname(string);
	void setYear(unsigned int);

	/* GET */
	string & getName();
	string & getSurname();
	unsigned int & getYear();
};


#endif
