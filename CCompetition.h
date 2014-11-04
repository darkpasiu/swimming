// CCompetition.h
#ifndef COMPETITION
#define COMPETITION

#include <iostream>
#include "define.h"

using namespace std;

class CCompetition {
	
	private:
	string m_szCompetition; 
	bool m_bGender;

 	public:
	void printCompetitionInfo();

	/* CONSTRUCTOR */
	CCompetition(string, bool);

	/* SET */
	void setCompetition(string);
	void setGender(bool);

	/* GET */
	string & getName();
	bool & getGender();
};


#endif
