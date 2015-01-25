// CCompetition.h
#ifndef COMPETITION
#define COMPETITION

#include <iostream>
#include <vector>

#include "define.h"

using namespace std;

/* forward declaration */
class CRegistration;

class CCompetition {

	private:
	string m_szCompetition;
	bool m_bGender;
        unsigned int m_uiCompetitionID;
 
	static unsigned int m_suiID;


	public:
	void printInfo();

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
