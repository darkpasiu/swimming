// CCompetition.cpp
#include "CCompetition.h"
#include "define.h"

using namespace std;

void CCompetition::printInfo()
{
	cout << "[CCompetition]: " << m_szCompetition << " ";
	(m_bGender) ? (cout << ksMen << endl) : ( cout << ksWomen << endl );
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
