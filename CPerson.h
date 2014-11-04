// CPerson.h
#ifndef PERSON
#define PERSON

#include <iostream>
#include "define.h"

using namespace std;

class CPerson {
	
	private:
	string m_szName;
	string m_szSurname;
	string m_szClub;
	bool m_bGender;
	unsigned int m_uiYear;
	unsigned int m_uiPersonID;

	static unsigned int m_suiID;

 	public:
	void printPersonInfo();

	/* CONSTRUCTOR */
	CPerson(string a_szName, string a_szSurname, unsigned int a_uiYear, bool a_bGender=MAN, string a_szClub="")
	{
		m_uiPersonID = m_suiID++;
		m_szName     = a_szName,
		m_szSurname  = a_szSurname,
		m_uiYear     = a_uiYear,
		m_bGender    = a_bGender,
		m_szClub     = a_szClub;
	};

	/* SET */
	void setName(string);
	void setSurname(string);
	void setClub(string);
	void setGender(bool);
	void setYear(unsigned int);

	/* GET */
	string & getName();
	string & getSurname();
	string & getClub();
	bool & getGender();
	unsigned int & getYear();
};


#endif
