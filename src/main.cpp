#include <iostream>

#include "CPerson.h"
#include "CStartingNote.h"
#include "CRegistration.h"
#include "define.h"
#include "CCompetition.h"
#include "CTournament.h"

#include <vector>
#include <random>

using namespace std;

int main()
{

	vector <CPerson *> vpCPerson;
	vector <CStartingNote *> vpCStartingNote;
	vector <CRegistration *> vpCRegistration;
	vector <CCompetition *> vpCCompetition;

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0, 9);

	const unsigned int  cuiSwimmersNumber  = 22;

	CCompetition * p_CCompetition1 = new CCompetition("50m stylem dowolnym", MAN);	


	for (unsigned int i = 0; i < cuiSwimmersNumber; i++)
	{
		string szName = "Swimmer_" + to_string(i);
		string szSurname = "Kowalski_" + to_string(i);
		string szTime = "00:1" + to_string( dist(mt) ) + "," + to_string( dist(mt) ) + to_string( dist(mt) );

		vpCPerson.push_back( new CPerson(szName, szSurname, 1988, MAN, "UKL Osemka") );
		vpCStartingNote.push_back( new CStartingNote(szTime) );
		vpCRegistration.push_back( new CRegistration(vpCPerson[i], vpCStartingNote[i]) );
		p_CCompetition1->addRegistration(vpCRegistration[i]);
	}

	CTournament * p_CTournament = CTournament::getInstance();
	p_CTournament->registerCompetition(p_CCompetition1);
//	p_CPerson1->printInfo();
//	p_CStartingNote1->printInfo();
//	p_CRegistration1->printInfo();
	p_CCompetition1->printInfo();

	p_CCompetition1->doTheSorting(ASCENDING);

	p_CCompetition1->printInfo();
	p_CCompetition1->assignLine();

	return 0;
}
