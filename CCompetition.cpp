// CCompetition.h 
#include "CCompetition.h"
#include "define.h"
#include "CTournament.h"
#include "CPerson.h"

using namespace std;

void CCompetition::printCompetitionInfo()
{
	cout << "[CCompetition]: " << m_szCompetition << " ";
	(m_bGender) ? (cout << ksMen << endl) : ( cout << ksWomen << endl );
}

// add pointer to CPerson to the vector
void CCompetition::registerPerson(CPerson * a_pCPerson)
{
	m_RegisteredPersonVector.push_back(a_pCPerson);
	cout << "[CCompetition]: new user registered: " << a_pCPerson->getName() << " " << a_pCPerson->getSurname() << endl;
}

// remove pointer to CPerson from the vector, do not run destructor
void CCompetition::unregisterPerson(CPerson * a_pCPerson)
{
	int iVecSize = m_RegisteredPersonVector.size();
	for ( int i = 0; i < iVecSize; i++ )
	{
		if( m_RegisteredPersonVector[i] == a_pCPerson )
		{
			m_RegisteredPersonVector.erase(m_RegisteredPersonVector.begin() + i);
			cout << "[CCompetition]: user unregistered: " << a_pCPerson->getName() << " " << a_pCPerson->getSurname() << endl;
			return;
		}
	}

	cout << "[CCompetition]: could not unregister a user: " << a_pCPerson->getName() << " " << a_pCPerson->getSurname() << endl;
}

/***** CONSTRUCTOR *****/

CCompetition::CCompetition(string a_szCompetition, bool a_bGender=MAN)
{
	m_szCompetition = a_szCompetition;
	m_bGender       = a_bGender;

        p_CTournamentInstance = CTournament::getInstance();
        p_CTournamentInstance->registerCompetition(this);

};

/***** SET *****/

void CCompetition::setCompetition(string a_szCompetition)
{
	m_szCompetition = a_szCompetition;
}

void CCompetition::setGender(bool a_bGender)
{
	m_bGender = a_bGender;
}

/***** GET *****/

string & CCompetition::getName()
{
	return m_szCompetition;
}

bool & CCompetition::getGender()
{
	return m_bGender;
}
