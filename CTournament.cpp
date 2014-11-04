// CTournament.cpp
#include "CTournament.h"

#include "CPerson.h"
#include "CCompetition.h"

using namespace std;

CTournament * CTournament::instance = 0;

CTournament * CTournament::getInstance()
{
	if(CTournament::instance == 0)
	instance = new CTournament();

	return instance;
}

void CTournament::registerPerson(CPerson * a_pCPerson)
{
	m_RegisteredPersonList.push_back(a_pCPerson);
	cout << "[CTournament]: new person registered: " << a_pCPerson->getName() << endl;
}

void CTournament::registerCompetition(CCompetition * a_pCCompetition)
{
	m_RegisteredCompetitionList.push_back(a_pCCompetition);
	cout << "[CTournament]: new Competition registered: " << a_pCCompetition->getName() << endl;
}

