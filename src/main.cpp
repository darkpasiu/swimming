#include <iostream>

#include "CPerson.h"
#include "CStartingNote.h"
#include "CRegistration.h"
#include "define.h"
#include "CCompetition.h"
#include "CTournament.h"

using namespace std;

int main()
{

	CPerson * p_CPerson1 = new CPerson("Swimmer1", "Kowalski1", 1988, MAN, "UKL Osemka");
	CStartingNote * p_CStartingNote1 = new CStartingNote("00:12,87");
	CRegistration * p_CRegistration1 = new CRegistration(p_CPerson1, p_CStartingNote1);

	CPerson * p_CPerson2 = new CPerson("Swimmer2", "Kowalski2", 1988, MAN, "UKL Osemka");
	CStartingNote * p_CStartingNote2 = new CStartingNote("00:12,27");
	CRegistration * p_CRegistration2 = new CRegistration(p_CPerson2, p_CStartingNote2);

	CPerson * p_CPerson3 = new CPerson("Swimmer3", "Kowalski3", 1988, MAN, "UKL Osemka");
	CStartingNote * p_CStartingNote3 = new CStartingNote("00:12,34");
	CRegistration * p_CRegistration3 = new CRegistration(p_CPerson3, p_CStartingNote3);

	CPerson * p_CPerson4 = new CPerson("Swimmer4", "Kowalski4", 1988, MAN, "UKL Osemka");
	CStartingNote * p_CStartingNote4 = new CStartingNote("00:12,12");
	CRegistration * p_CRegistration4 = new CRegistration(p_CPerson4, p_CStartingNote4);

	CPerson * p_CPerson5 = new CPerson("Swimmer5", "Kowalski5", 1988, MAN, "UKL Osemka");
	CStartingNote * p_CStartingNote5 = new CStartingNote("00:12,98");
	CRegistration * p_CRegistration5 = new CRegistration(p_CPerson5, p_CStartingNote5);

	CPerson * p_CPerson6 = new CPerson("Swimmer6", "Kowalski6", 1988, MAN, "UKL Osemka");
	CStartingNote * p_CStartingNote6 = new CStartingNote("00:13,17");
	CRegistration * p_CRegistration6 = new CRegistration(p_CPerson6, p_CStartingNote6);

	CCompetition * p_CCompetition1 = new CCompetition("50m stylem dowolnym", MAN);

	p_CCompetition1->addRegistration(p_CRegistration1);
	p_CCompetition1->addRegistration(p_CRegistration2);
	p_CCompetition1->addRegistration(p_CRegistration3);
	p_CCompetition1->addRegistration(p_CRegistration4);
	p_CCompetition1->addRegistration(p_CRegistration5);
	p_CCompetition1->addRegistration(p_CRegistration6);

	p_CStartingNote6->convertApplicationTimeToInt();
	p_CCompetition1->sortVectorAscending(p_CRegistration6, p_CRegistration6);

	CTournament * p_CTournament = CTournament::getInstance();
	p_CTournament->registerCompetition(p_CCompetition1);
//	p_CPerson1->printInfo();
//	p_CStartingNote1->printInfo();
//	p_CRegistration1->printInfo();
	p_CCompetition1->printInfo();

	return 0;
}
