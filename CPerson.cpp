// person.cpp
#include "CPerson.h"

using namespace std;

unsigned int CPerson::m_suiID = 0;

/* SET */

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

/* GET */

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
