// CCompetition.h 
#include "CCompetition.h"

using namespace std;

void CCompetition::printCompetitionInfo()
{
	cout << m_szCompetition << " " << m_bGender << endl;
}

/***** CONSTRUCTOR *****/

CCompetition::CCompetition(string a_szCompetition, bool a_bGender )
{
	m_szCompetition = a_szCompetition;
	m_bGender       = a_bGender;
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
