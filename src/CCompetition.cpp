// CCompetition.cpp
#include "CCompetition.h"
#include "define.h"

/* needed by sortVectorAscending */
#include "CStartingNote.h"

/* needed by t CRegistration * p_lCRegistrationort() */
#include <algorithm>

/* needed by printInfo() */
#include "CRegistration.h"

using namespace std;

/* CONSTRUCTOR */

CCompetition::CCompetition(string a_szCompetition, bool a_bGender)
{
	m_szCompetition = a_szCompetition;
	m_bGender = a_bGender;
}

void CCompetition::printInfo()
{
	cout << "[CCompetition]: " << m_szCompetition << " ";
	(m_bGender) ? (cout << ksMen << endl) : ( cout << ksWomen << endl );

	int iVecSize = m_RegisteredVector.size();
	if ( iVecSize > 0 )
	{
		for (int i = 0; i < iVecSize; i++)
		{
			m_RegisteredVector[i]->printInfo();
		}
	}
	else
	{
		cout << "[CCompetition]: zero registered users found" << endl;
	}
}

void CCompetition::addRegistration(CRegistration * a_pCRegistration)
{
	m_RegisteredVector.push_back(a_pCRegistration);
}

void CCompetition::removeRegistration(CRegistration * a_pCRegistration)
{
	int iVecSize = m_RegisteredVector.size();
	if( iVecSize > 0 )
	{
		for (int i = 0; i < iVecSize; i++)
		{
			if ( m_RegisteredVector[i] == a_pCRegistration )
			{
				//TODO clean memory?
				m_RegisteredVector.erase(m_RegisteredVector.begin() + i);
				cout << "[CCompetition]: registration removed" << endl;
			}
		}
	}
	else
	{
		cout << "[CCompetition]: could not remove registration " << endl;
	}
}

void CCompetition::assignLine()
{

	int iVecSize = m_RegisteredVector.size();
	if( iVecSize > 0 )
	{
		for (int i = 0, series = 0; i < iVecSize; i++)
		{
			if ( i % 6 == 0 )
			{
				series++;
				cout << endl;
			}
			cout << i << "th:\ts. " << series << "\tl. " << (i % 6) + 1 << endl;
			cout << i << "th:\ts. " << series << "\tl. " << kuitbl_scheme3[i % 6]  << endl;
			m_RegisteredVector[i]->getCStartingNote()->setTrack(kuitbl_scheme3[i % 6]);
			m_RegisteredVector[i]->getCStartingNote()->setSeries(series);
		}
	}
}

bool sortVectorAscending(CRegistration * a_plCRegistration, CRegistration * a_prCRegistration)
{
	unsigned int uiLtime = 0, uiRtime = 0;
	uiLtime = a_plCRegistration->getCStartingNote()->convertApplicationTimeToInt();
	uiRtime = a_prCRegistration->getCStartingNote()->convertApplicationTimeToInt();

	//cout << uiLtime << " " << uiRtime << endl;

	return uiLtime < uiRtime;
}

bool sortVectorDescending(CRegistration * a_plCRegistration, CRegistration * a_prCRegistration)
{
	unsigned int uiLtime = 0, uiRtime = 0;
	uiLtime = a_plCRegistration->getCStartingNote()->convertApplicationTimeToInt();
	uiRtime = a_prCRegistration->getCStartingNote()->convertApplicationTimeToInt();

	//cout << uiLtime << " " << uiRtime << endl;

	return uiLtime > uiRtime;
}

// sort the vector, select sorting method by bool parameter
void CCompetition::doTheSorting(bool a_bSortingType)
{
	if ( a_bSortingType == ASCENDING  )
	{
		std::sort(m_RegisteredVector.begin(), m_RegisteredVector.end(), sortVectorAscending);
	}
	else if ( a_bSortingType == DESCENDING  )
	{
		std::sort(m_RegisteredVector.begin(), m_RegisteredVector.end(), sortVectorDescending);
	}
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
