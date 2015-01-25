// CStartingNote.cpp
#include "CStartingNote.h"

// atoi
#include <stdlib.h>

using namespace std;

unsigned int CStartingNote::m_suiID = 0;

/* CONSTRUCTOR */

CStartingNote::CStartingNote(string a_szApplicationResult, unsigned int a_uiTrack, unsigned int a_uiSeries)
{
	m_uiStartingNoteID    = m_suiID++;
	m_szApplicationResult = a_szApplicationResult;
	m_uiTrack             = a_uiTrack;
	m_uiSeries            = a_uiSeries;
}

/* DESTRUCTOR */

CStartingNote::~CStartingNote()
{
	cout <<  "[CStartingNote]: destructor\n";
}

//TODO application result - zmienic nazwe na application time
unsigned int CStartingNote::convertApplicationTimeToInt()
{
	string szTmp = m_szApplicationResult;
	// remove ":" from string: 00:21,23 -> 0021,23
	szTmp = szTmp.erase(szTmp.find(':'),1);
	// remove "," from string: 00:21,23 -> 002123
	szTmp = szTmp.erase(szTmp.find(','),1);
	// convert string to int, remove spaces in front: 002123 -> 2123
	return  atoi( szTmp.c_str() );
}

void CStartingNote::printInfo()
{
	 cout << "[CStartingNote]: \t" << "[" << m_uiStartingNoteID << "] " << m_szApplicationResult << " " << m_uiSeries << " " << m_uiTrack << endl;
}

/* SET */

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

/* GET */

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
