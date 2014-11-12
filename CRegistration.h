// CRegistration.h
#ifndef COMPETITION 
#define COMPETITION

#include <iostream>

using namespace std;

class CPerson;
class CStartingNote;

class CRegistration {
	
	private:
	CPerson * m_pCPerson;
	CStartingNote * m_pCStartingNote;

	public:
	void printRegistrationInfo();

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
