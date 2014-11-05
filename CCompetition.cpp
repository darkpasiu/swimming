// CCompetition.h 
#include "CCompetition.h"
#include "define.h"
#include "CTournament.h"

using namespace std;

void CCompetition::printCompetitionInfo()
{
	cout << "[CCompetition]: " << m_szCompetition << " ";
	(m_bGender) ? (cout << ksMen << endl) : ( cout << ksWomen << endl );
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
