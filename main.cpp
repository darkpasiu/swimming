#include <iostream>

#include "CPerson.h"
#include "CCompetition.h"
#include "CTournament.h"

using namespace std;

int main(){
	
	cout << "^^'\n";
	CPerson plywak1("Jan", "Kowalski", 1988, 1, "UKL Osemka");
	CPerson plywak2("Jacek", "Walski", 1989, 1, "Wodnik Police");
	CPerson plywak3("Kamila", "Wojdak", 1989, 0, "Wodnik Police");
	
	CCompetition zawody1("50m stylem dowolnym", 0);
	CCompetition zawody2("50m stylem klasycznym", 0);

	plywak1.printPersonInfo();
	plywak2.printPersonInfo();
	plywak3.printPersonInfo();

	zawody1.printCompetitionInfo();
	zawody2.printCompetitionInfo();

	CTournament * p_CTournamentInstance = CTournament::getInstance();
        p_CTournamentInstance->printRegisteredPersons();
        p_CTournamentInstance->printRegisteredCompetitions();

	return 0;
}
