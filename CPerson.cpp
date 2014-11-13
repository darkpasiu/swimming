// CPerson.cpp
#include <new>          	// std::bad_alloc
#include "CPerson.h"

using namespace std;

unsigned int CPerson::m_suiID = 0;

void CPerson::printInfo()
{
	cout << "[CPerson]: " << "[" << m_uiPersonID << "]" << " " << m_szName << " " << m_szSurname << " " << m_szClub << " " << m_bGender << " " << m_uiYear << endl; 

}

/* CONSTRUCTOR */

CPerson::CPerson(string a_szName, string a_szSurname, unsigned int a_uiYear, bool a_bGender, string a_szClub)
{
	m_uiPersonID = m_suiID++;
	m_szName     = a_szName,
	m_szSurname  = a_szSurname,
	m_uiYear     = a_uiYear,
	m_bGender    = a_bGender,
	m_szClub     = a_szClub;
};

/* DESTRUCTOR */
CPerson::~CPerson()
{
	cout << "\n[CPerson]: destructor \n";
}

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

void CPerson::setClub(string a_szClub)
{
        m_szClub = a_szClub;
};

void CPerson::setGender(bool a_bGender)
{
        m_bGender = a_bGender;
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

string & CPerson::getClub()
{
	return m_szClub;
}

bool & CPerson::getGender()
{
	return m_bGender;
}
