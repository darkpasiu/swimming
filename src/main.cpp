#include <iostream>

#include "CPerson.h"
#include "CStartingNote.h"
#include "CRegistration.h"
#include "define.h"
#include "CCompetition.h"

using namespace std;

int main()
{

	CPerson * p_CPerson1 = new CPerson("Swimmer1", "Kowalski1", 1988, MAN, "UKL Osemka");
	CStartingNote * p_CStartingNote1 = new CStartingNote("00:12,87");
	CRegistration * p_CRegistration1 = new CRegistration(p_CPerson1, p_CStartingNote1);
	CCompetition * p_CCompetition1 = new CCompetition("50m stylem dowolnym", MAN);
	p_CCompetition1->addRegistration(p_CRegistration1);

	p_CPerson1->printInfo();
	p_CStartingNote1->printInfo();
	p_CRegistration1->printInfo();
	p_CCompetition1->printInfo();

	p_CCompetition1->removeRegistration(p_CRegistration1);
	p_CCompetition1->printInfo();

	return 0;
}
