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
	vector<CRegistration *> m_RegisteredVector;

	public:
	void printInfo();
	void addRegistration(CRegistration *);
	void removeRegistration(CRegistration *);

	void doTheSorting(bool);

	/* CONSTRUCTOR */
	CCompetition(string, bool);

	/* SET */
	void setCompetition(string);
	void setGender(bool);

	/* GET */
	string & getName();
	bool & getGender();
};

// function used by std::sort --> doTheSorting(), sort ascending
bool sortVectorAscending(CRegistration *, CRegistration *);

// function used by std::sort --> doTheSorting(), sort descending
bool sortVectorDescending(CRegistration *, CRegistration *);

#endif
