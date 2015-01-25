// CCompetition.cpp
#include "CCompetition.h"
#include "define.h"

using namespace std;

unsigned int CCompetition::m_suiID = 0;


/* CONSTRUCTOR */

CCompetition::CCompetition(string a_szCompetition, bool a_bGender)
{
	m_uiCompetitionID = m_suiID++;
	m_szCompetition = a_szCompetition;
	m_bGender = a_bGender;
}

void CCompetition::printInfo()
{
	cout << "[CCompetition]: \t" << "[" << m_uiCompetitionID << "] " << m_szCompetition << " ";
	(m_bGender) ? (cout << ksMen << endl) : ( cout << ksWomen << endl );
}

/* SET */

void CCompetition::setCompetition(string a_szCompetition)
{
	m_szCompetition = a_szCompetition;
}

void CCompetition::setGender(bool a_bGender)
{
	m_bGender = a_bGender;
}

/* GET */

string & CCompetition::getName()
{
	return m_szCompetition;
}

bool & CCompetition::getGender()
{
	return m_bGender;
}
