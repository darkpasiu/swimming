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

	const unsigned int uitbl_scheme1[kiLineNumber6] = {1, 2, 3, 4, 5, 6};
	const unsigned int uitbl_scheme2[kiLineNumber6] = {6, 5, 4, 3, 2, 1};
	const unsigned int uitbl_scheme3[kiLineNumber6] = {3, 4, 2, 5, 1, 6};

	public:
	void printInfo();
	void addRegistration(CRegistration *);
	void removeRegistration(CRegistration *);
	void assignLine();

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
