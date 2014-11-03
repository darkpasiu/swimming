// CPerson.h
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
	/* CONSTRUCTOR */
	CPerson(string a_szName, string a_szSurname, unsigned int a_uiYear)
	{
		m_szName    = a_szName,
		m_szSurname = a_szSurname,
		m_uiYear    = a_uiYear;
	};

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
