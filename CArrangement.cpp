// CArrangement.cpp
#include "CArrangement.h"

using namespace std;

/***** CONSTRUCTOR *****/

CArrangment::CArrangment(string a_szApplicationResult, unsigned int a_uiTrack, unsigned int a_uiSeries)
{
	m_szApplicationResult = a_szApplicationResult;
	m_uiTrack             = a_uiTrack;
	m_uiSeries            = a_uiSeries;
}

/***** DESTRUCTOR *****/

CArrangment::~CArrangment()
{
	cout <<  "[CArrangment]: destructor\n";
}

/***** SET *****/

void CArrangment::setApplicationResult(string a_szApplicationResult)
{
	m_szApplicationResult = a_szApplicationResult;
}

void CArrangment::setFinalResult(string a_szFinalResult)
{
	m_szFinalResult = a_szFinalResult;
}

void CArrangment::setTrack(unsigned int a_uiTrack)
{
	m_uiTrack = a_uiTrack;
}

void CArrangment::setSeries(unsigned int a_uiSeries)
{
	m_uiSeries = a_uiSeries;
}

/***** GET *****/

string & CArrangment::getApplicationResult()
{
	return m_szApplicationResult;
}

string & CArrangment::getFinalResult()
{
	return m_szFinalResult;
}

unsigned int & CArrangment::getTrack()
{
	return m_uiTrack;
}

unsigned int & CArrangment::getSeries()
{
	return m_uiSeries;
}
