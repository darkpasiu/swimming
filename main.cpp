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
	CApplication karta1("0:37,86", &zawody1);
	plywak1.addApplication(&karta1);

	CPerson plywak2("swim2", "Kowalski2", 1989, 1, "Wodnik Police");
	CApplication karta2("0:35,87", &zawody1);
	plywak2.addApplication(&karta2);

	CPerson plywak3("swim3", "Kowalski3", 1989, 1, "Wodnik Police");
	CApplication karta3("0:35,78", &zawody1);
	plywak3.addApplication(&karta3);

	CPerson plywak4("swim4", "Kowalski4", 1989, 1, "Wodnik Police");
	CApplication karta4("0:38,12", &zawody1);
	plywak4.addApplication(&karta4);

	CPerson plywak5("swim5", "Kowalski5", 1989, 1, "Wodnik Police");
	CApplication karta5("0:36,99", &zawody1);
	plywak5.addApplication(&karta5);

	CPerson plywak6("swim6", "Kowalski6", 1989, 1, "Wodnik Police");
	CApplication karta6("0:37,40", &zawody1);
	plywak6.addApplication(&karta6);

	CPerson plywak7("swim7", "Kowalski7", 1989, 1, "Wodnik Police");
	CApplication karta7("0:35,21", &zawody1);
	plywak7.addApplication(&karta7);

	CPerson plywak8("swim8", "Kowalski8", 1989, 1, "Wodnik Police");
	CApplication karta8("0:37,36", &zawody1);
	plywak8.addApplication(&karta8);

	CPerson plywak9("swim9", "Kowalski9", 1989, 1, "Wodnik Police");
	CApplication karta9("0:36,80", &zawody1);
	plywak9.addApplication(&karta9);

	CPerson plywak10("swim10", "Kowalski10", 1989, 1, "Wodnik Police");
	CApplication karta10("0:36,30", &zawody1);
	plywak10.addApplication(&karta10);


	karta1.printApplicationInfo();

	cout << "\n**********\n";
	plywak1.printPersonInfo();
	plywak2.printPersonInfo();
	plywak3.printPersonInfo();
	cout << "**********\n\n";

	plywak1.removeApplication(&karta3);
	plywak1.printPersonInfo();

	zawody1.printCompetitionInfo();
	zawody2.printCompetitionInfo();

	CTournament * p_CTournamentInstance = CTournament::getInstance();
        p_CTournamentInstance->printRegisteredPersons();
        p_CTournamentInstance->printRegisteredCompetitions();

	return 0;
}
