#include <iostream>

#include "CPerson.h"
#include "CCompetition.h"
#include "CTournament.h"
#include "CApplication.h"

using namespace std;

int main(){

	CCompetition zawody1("50m stylem dowolnym", 0);
	CCompetition zawody2("50m stylem klasycznym", 0);
	CCompetition zawody3("100m stylem klasycznym", 0);
	CCompetition zawody4("100m stylem dowolnym", 0);
	
	CPerson plywak1("Jan", "Kowalski", 1988, 1, "UKL Osemka");
	CPerson plywak2("Jacek", "Walski", 1989, 1, "Wodnik Police");
	CPerson plywak3("Kamila", "Wojdak", 1989, 0, "Wodnik Police");
	

	CApplication karta1("0:57,86",1,3, &zawody1);
	plywak1.addApplication(&karta1);
	CApplication karta2("0:36,36",2,4, &zawody2);
	plywak1.addApplication(&karta2);
	CApplication karta3("1:22,36",4,2, &zawody3);
	plywak1.addApplication(&karta3);

	plywak1.printPersonInfo();
	plywak2.printPersonInfo();
	plywak3.printPersonInfo();

	karta1.printApplicationInfo();

	zawody1.printCompetitionInfo();
	zawody2.printCompetitionInfo();

	CTournament * p_CTournamentInstance = CTournament::getInstance();
        p_CTournamentInstance->printRegisteredPersons();
        p_CTournamentInstance->printRegisteredCompetitions();

	return 0;
}
