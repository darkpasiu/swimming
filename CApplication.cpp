// CApplication.cpp 
#include "CApplication.h"
#include "CCompetition.h"

using namespace std;

void CApplication::printApplicationInfo()
{
	cout <<  "[CApplication]: " << m_szApplicationResult << " s:" << m_uiSeries << "t:" << m_uiTrack;

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

CApplication::CApplication(string a_szApplicationResult, unsigned int a_uiTrack = 0, unsigned int a_uiSeries = 0, CCompetition * a_pCCompetition = 0)
{
	m_szApplicationResult = a_szApplicationResult;
	m_uiTrack             = a_uiTrack;
	m_uiSeries            = a_uiSeries;
	m_pCCompetition       = a_pCCompetition;
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
