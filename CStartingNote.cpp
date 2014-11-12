// CStartingNote.cpp
#include "CStartingNote.h"

using namespace std;

/***** CONSTRUCTOR *****/

CStartingNote::CStartingNote(string a_szApplicationResult, unsigned int a_uiTrack, unsigned int a_uiSeries)
{
	m_szApplicationResult = a_szApplicationResult;
	m_uiTrack             = a_uiTrack;
	m_uiSeries            = a_uiSeries;
}

/***** DESTRUCTOR *****/

CStartingNote::~CStartingNote()
{
	cout <<  "[CStartingNote]: destructor\n";
}

/***** SET *****/

void CStartingNote::setApplicationResult(string a_szApplicationResult)
{
	m_szApplicationResult = a_szApplicationResult;
}

void CStartingNote::setFinalResult(string a_szFinalResult)
{
	m_szFinalResult = a_szFinalResult;
}

void CStartingNote::setTrack(unsigned int a_uiTrack)
{
	m_uiTrack = a_uiTrack;
}

void CStartingNote::setSeries(unsigned int a_uiSeries)
{
	m_uiSeries = a_uiSeries;
}

/***** GET *****/

string & CStartingNote::getApplicationResult()
{
	return m_szApplicationResult;
}

string & CStartingNote::getFinalResult()
{
	return m_szFinalResult;
}

unsigned int & CStartingNote::getTrack()
{
	return m_uiTrack;
}

unsigned int & CStartingNote::getSeries()
{
	return m_uiSeries;
}
