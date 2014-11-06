// CPerson.cpp
#include "CPerson.h"
#include "CTournament.h"
#include "CApplication.h"
#include "define.h"

using namespace std;

unsigned int CPerson::m_suiID = 0;

void CPerson::printPersonInfo()
{
	cout << "[CPerson]: " << "[" << m_uiPersonID << "]" << " " << m_szName << " " << m_szSurname << " " << m_szClub << " " << m_bGender << " " << m_uiYear ; 

	int iVecSize = m_PersonApplicationVector.size();

	if( iVecSize > 0 )
	{
		cout << "" << endl;
		for (int i = 0; i < iVecSize; i++)
		{
			m_PersonApplicationVector[i]->printApplicationInfo();
		}
		cout << "\n";
	}
	else
	{
		cout << " application card is empty" << endl;
	}

}

bool CPerson::addApplication(CApplication * a_pCApplication)
{
	/* check if application is not already in use */
	if ( a_pCApplication->getIsCurrentlyUsed() )
	{
		cout << "[CPerson]: WARNING application already used, cannot add it again!\n";
		return FAIL;
	}
	else
	{
		a_pCApplication->setAsUsed();
		m_PersonApplicationVector.push_back(a_pCApplication);
		return SUCCESS;
	}

	//TODO sprawdzic czy zawodnik nie startuje dwa razy w tej samej konkurencji, moze zostal juz dodany wczesniej?
}

bool CPerson::removeApplication(CApplication * a_pCApplication)
{
	int iVecSize = m_PersonApplicationVector.size();

	if( iVecSize > 0 )
        {
                for (int i = 0; i < iVecSize; i++)
                {
                        if ( m_PersonApplicationVector[i] == a_pCApplication )
			{
				m_PersonApplicationVector.erase(m_PersonApplicationVector.begin() + i);
				a_pCApplication->setAsUsed();
				cout << "[CPerson]: application removed from the vector" << endl;
				return SUCCESS;
			}
                }
        }
        else
        {
                cout << "[CPerson]: WARNING applicatios card is empty, cannot remove anything .." << endl;
		return FAIL;
        }
	return FAIL;
}

/***** CONSTRUCTOR *****/

CPerson::CPerson(string a_szName, string a_szSurname, unsigned int a_uiYear, bool a_bGender=MAN, string a_szClub)
{
	m_uiPersonID = m_suiID++;
	m_szName     = a_szName,
	m_szSurname  = a_szSurname,
	m_uiYear     = a_uiYear,
	m_bGender    = a_bGender,
	m_szClub     = a_szClub;

	p_CTournamentInstance = CTournament::getInstance();
	p_CTournamentInstance->registerPerson(this);

};

/***** SET *****/

void CPerson::setName(string a_szName)
{
	m_szName = a_szName;
};

void CPerson::setSurname(string a_szSurname)
{
	m_szSurname = a_szSurname;
};

void CPerson::setYear(unsigned int a_uiYear)
{
        m_uiYear = a_uiYear;
};

void CPerson::setClub(string a_szClub)
{
        m_szClub = a_szClub;
};

void CPerson::setGender(bool a_bGender)
{
        m_bGender = a_bGender;
};

/***** GET *****/

string & CPerson::getName()
{ 
	return m_szName;
};

string & CPerson::getSurname()
{ 
	return m_szSurname;
};

unsigned int & CPerson::getYear()
{ 
	return m_uiYear;
};

string & CPerson::getClub()
{
	return m_szClub;
}

bool & CPerson::getGender()
{
	return m_bGender;
}
