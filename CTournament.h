// CTournament.h
#ifndef TORUNAMENT
#define TORUNAMENT

#include <list>
#include "CPerson.h"
#include "CCompetition.h"

using namespace std;

// singleton
class CTournament
{
	
	private:
	list<CPerson *> m_listPerson;
	list<CCompetition *> m_listCompetition;

	static CTournament *instance;
	CTournament() {};

	public:
	static CTournament *getInstance();
	~CTournament() {};
};

#endif
