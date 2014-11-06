// CTournament.cpp
#include <regex>

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
	cout << "[CTournament]: new person registered: "<< "" << a_pCPerson->getSurname() << endl;
}

void CTournament::registerCompetition(CCompetition * a_pCCompetition)
{
	m_RegisteredCompetitionList.push_back(a_pCCompetition);
	cout << "[CTournament]: new Competition registered: " << a_pCCompetition->getName() << endl;
}

void CTournament::printRegisteredPersons()
{
	cout << "\n[CTournament]: printRegisteredPersons()" << endl;
	
	std::list<CPerson *>::iterator it;

	for (it = m_RegisteredPersonList.begin(); it != m_RegisteredPersonList.end(); ++it)
	{
		cout << "--> " << (*it)->getName() << " " << (*it)->getSurname()  << " " << (*it)->getClub() << " " << (*it)->getGender() << " " << (*it)->getYear() << endl;
		(*it)->printPersonInfo();
	}
}

void CTournament::printRegisteredCompetitions()
{
        cout << "\n[CTournament]: printRegisteredCompetitions()" << endl;

        std::list<CCompetition *>::iterator it;

        for (it = m_RegisteredCompetitionList.begin(); it != m_RegisteredCompetitionList.end(); ++it)
        {
                cout << (*it)->getName() << " " << (*it)->getGender() << endl;
        }

}

