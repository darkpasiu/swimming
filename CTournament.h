// CTournament.h
#ifndef TORUNAMENT
#define TORUNAMENT

#include <list>

using namespace std;

// forward declaration
class CPerson;
class CCompetition;

// singleton
class CTournament
{
	
	private:
	list<CPerson *> m_RegisteredPersonList;
	list<CCompetition *> m_RegisteredCompetitionList;

	static CTournament *instance;

	/* CONSTRUCTOR */
	CTournament() {};

	public:
	static CTournament *getInstance();

	void registerPerson(CPerson *);
	void registerCompetition(CCompetition *);

	void printRegisteredPersons();
	void printRegisteredCompetitions();

	/* DESTRUCTOR */
	~CTournament() {};

};

#endif
