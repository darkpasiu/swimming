// CRegistration.cpp 
#include "CRegistration.h"
#include "CStartingNote.h"
#include "CPerson.h"

using namespace std;

void CRegistration::printInfo()
{
	cout << "[CPerson]: ";
	m_pCPerson->printInfo();
	cout << "[CPerson]: ";
	m_pCStartingNote->printInfo();
}

/* CONSTRUCTOR */

CRegistration::CRegistration(CPerson * a_pCPerson, CStartingNote * a_pCStartingNote)
{
	m_pCPerson = a_pCPerson;
	m_pCStartingNote = a_pCStartingNote;
}

/* SET */

void CRegistration::setCPerson(CPerson * a_pCPerson)
{
	m_pCPerson = a_pCPerson;
}

void CRegistration::setCArrangment(CStartingNote * a_pCStartingNote)
{
	m_pCStartingNote = a_pCStartingNote;
}

/* GET */

CPerson * CRegistration::getCPerson()
{
	return m_pCPerson;
}

CStartingNote * CRegistration::getCStartingNote()
{
	return m_pCStartingNote;
}
