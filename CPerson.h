// CPerson.h
#ifndef PERSON
#define PERSON

#include <iostream>
#include "define.h"

using namespace std;
class CTournament;


class CPerson {
	
	private:
	string m_szName;
	string m_szSurname;
	string m_szClub;
	bool m_bGender;
	unsigned int m_uiYear;
	unsigned int m_uiPersonID;

	CTournament * p_CTournamentInstance;
	
	static unsigned int m_suiID;

 	public:
	void printPersonInfo();

	/* CONSTRUCTOR */
	CPerson(string, string, unsigned int, bool, string);

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
