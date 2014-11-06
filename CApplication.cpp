// CApplication.cpp 
#include "CApplication.h"
#include "CCompetition.h"

using namespace std;

void CApplication::printApplicationInfo()
{
	cout <<  "[CApplication]: " << m_szApplicationResult << " s:" << m_uiSeries << " t:" << m_uiTrack << " active:" << getIsCurrentlyUsed();

	if (m_pCCompetition)
	{
		cout << " " << m_pCCompetition->getName() << endl;
	}
	else
	{
		cout << endl;
	}

}


/***** CONSTRUCTOR *****/

CApplication::CApplication(CCompetition * a_pCCompetition, string a_szApplicationResult, unsigned int a_uiTrack, unsigned int a_uiSeries, bool a_bIsCurrentlyUsed)
{
	m_szApplicationResult = a_szApplicationResult;
	m_uiTrack             = a_uiTrack;
	m_uiSeries            = a_uiSeries;
	m_pCCompetition       = a_pCCompetition;
	m_bIsCurrentlyUsed    = a_bIsCurrentlyUsed;
}

/***** DESTRUCTOR *****/

CApplication::~CApplication()
{
	cout <<  "[CApplication]: destructor\n";
}

/***** SET *****/

void CApplication::setApplicationResult(string a_szApplicationResult)
{
	m_szApplicationResult = a_szApplicationResult;
}

void CApplication::setFinalResult(string a_szFinalResult)
{
	m_szFinalResult = a_szFinalResult;
}

void CApplication::setTrack(unsigned int a_uiTrack)
{
	m_uiTrack = a_uiTrack;
}

void CApplication::setSeries(unsigned int a_uiSeries)
{
	m_uiSeries = a_uiSeries;
}

void CApplication::setCompetition(CCompetition * a_pCCompetition)
{
	m_pCCompetition = a_pCCompetition;
}

void CApplication::setAsUsed()
{
	m_bIsCurrentlyUsed = 1;
}

void CApplication::setAsUnUsed()
{
	m_bIsCurrentlyUsed = 0;
}


/***** GET *****/

string & CApplication::getApplicationResult()
{
	return m_szApplicationResult;
}

string & CApplication::getFinalResult()
{
	return m_szFinalResult;
}

unsigned int & CApplication::getTrack()
{
	return m_uiTrack;
}

unsigned int & CApplication::getSeries()
{
	return m_uiSeries;
}

CCompetition * CApplication::getCompetition()
{
	return m_pCCompetition;
}

bool & CApplication::getIsCurrentlyUsed()
{
	return m_bIsCurrentlyUsed;
}
