#include <iostream>

#include "CPerson.h"
#include "CCompetition.h"
#include "CTournament.h"
#include "CApplication.h"

using namespace std;

int main(){

	CCompetition zawody1("50m stylem dowolnym", 0);
	CCompetition zawody2("50m stylem klasycznym", 1);
	CCompetition zawody3("100m stylem klasycznym", 0);
	CCompetition zawody4("100m stylem dowolnym", 0);
	
	CPerson plywak1("swim1", "Kowalski1", 1988, 1, "UKL Osemka");
	plywak1.addApplication(&zawody1, "0:25,86");
	//plywak1.removeApplication(0);

	cout << "\n**********\n";
	plywak1.printPersonInfo();
	cout << "**********\n\n";

	zawody1.printCompetitionInfo();
	zawody2.printCompetitionInfo();

	CTournament * p_CTournamentInstance = CTournament::getInstance();
        p_CTournamentInstance->printRegisteredPersons();
        p_CTournamentInstance->printRegisteredCompetitions();

	return 0;
}
