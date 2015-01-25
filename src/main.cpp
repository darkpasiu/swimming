#include <iostream>

#include "CPerson.h"
#include "CCompetition.h"
#include "CStartingNote.h"
//#include "CRegistration.h"
//#include "define.h"
//#include "CTournament.h"

#include <vector>
#include <random>

using namespace std;

int main()
{

	CPerson swimmer_0 = CPerson("name_0", "surname_0", 1988, MAN, "UKL Osemka");
	swimmer_0.printInfo();
	
	CCompetition competition_0 = CCompetition("50m stylem dowolnym", MAN);
	competition_0.printInfo();

	CStartingNote startingNote_0 = CStartingNote("00:25,96");
	startingNote_0.printInfo();

/*
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
//	p_CCompetition1->printInfo();

	p_CCompetition1->doTheSorting(ASCENDING);

	p_CCompetition1->printInfo();

	p_CCompetition1->assignLine();

	p_CCompetition1->printInfo();
*/
	return 0;
}
