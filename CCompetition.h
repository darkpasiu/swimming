// CCompetition.h
#ifndef COMPETITION
#define COMPETITION

#include <iostream>
#include <vector>
#include "define.h"

using namespace std;

class CTournament;
class CPerson;

class CCompetition {
	
	private:
	string m_szCompetition; 
	bool m_bGender;
	vector<CPerson *> m_RegisteredPersonVector;

	CTournament * p_CTournamentInstance;

 	public:
	void printCompetitionInfo();
	void registerPerson(CPerson *);
	void unregisterPerson(CPerson *);

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
