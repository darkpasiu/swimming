// CApplication.h 
#include "CApplication.h"

using namespace std;

void CApplication::printApplicationInfo()
{
	cout << m_szApplicationResult << " " << m_uiTrack << " " << m_uiSeries;
}


/***** CONSTRUCTOR *****/

CApplication::CApplication(string a_szApplicationResult, unsigned int a_uiTrack=0, unsigned int a_uiSeries=0)
{
	m_szApplicationResult = a_szApplicationResult;
	m_uiTrack             = a_uiTrack;
	m_uiSeries            = a_uiSeries;
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
