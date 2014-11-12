// CRegistration.cpp 
#include "CRegistration.h"
#include "CStartingNote.h"
#include "CPerson.h"

using namespace std;

/***** CONSTRUCTOR *****/

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
