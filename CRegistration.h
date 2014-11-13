// CRegistration.h
#ifndef REGISTRATION 
#define REGISTRATION

#include <iostream>

using namespace std;

class CPerson;
class CStartingNote;

class CRegistration {
	
	private:
	CPerson * m_pCPerson;
	CStartingNote * m_pCStartingNote;

	public:
	void printInfo();

	/* CONSTRUCTOR */
	CRegistration(CPerson *, CStartingNote *); 

	/* DESTRUCTOR */
	~CRegistration();

	/* SET */
	void setCPerson(CPerson *);
	void setCArrangment(CStartingNote *);

	/* GET */
	CPerson * getCPerson();
	CStartingNote * getCStartingNote();
};


#endif
