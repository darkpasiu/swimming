// CPerson.cpp
#include <new>          	// std::bad_alloc
#include "CPerson.h"
#include "CTournament.h"
#include "CCompetition.h"
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

// allocate memory for new application and add it to vector
bool CPerson::addApplication(CCompetition * a_pCCompetition, string a_szResult, unsigned int a_uiTrack, unsigned int a_uiSeries, bool a_bIsCurrentlyUsed)
{
	CApplication * pCApplication = 0;
	try
	{
		pCApplication = new CApplication(a_pCCompetition, a_szResult, a_uiTrack, a_uiSeries, a_bIsCurrentlyUsed);
		//TODO free the memory allocated here!
	}
	catch (std::bad_alloc& ba)
	{
		std::cerr << "[CPerson]: bad_alloc caught: " << ba.what() << '\n';
		return FAIL;
	}

	m_PersonApplicationVector.push_back(pCApplication);

	return SUCCESS;
}

void CPerson::removeApplication(unsigned int a_uiIndex)
{
	cout << "\n[CPerson]: removeApplication(), removing application: " << a_uiIndex << endl;
	delete m_PersonApplicationVector[a_uiIndex];
	m_PersonApplicationVector.erase(m_PersonApplicationVector.begin()+a_uiIndex);
	cout << "\n[CPerson]: removeApplication() \n";
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

/* DESTRUCTOR */
CPerson::~CPerson()
{
	cout << "\n[CPerson]: destructor \n";
	int iVecSize = m_PersonApplicationVector.size();

	for (int i = 0; i < iVecSize; i++)
	{
		delete m_PersonApplicationVector[i];
	}
}

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
