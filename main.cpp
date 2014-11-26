#include <iostream>

#include "CPerson.h"
#include "CCompetition.h"
#include "CTournament.h"
#include "CApplication.h"


using namespace std;

int main(){

	CCompetition konkurencja1("50m stylem dowolnym", 1);

	CPerson plywak1("Swimmer1", "Kowalski1", 1988, 1, "UKL Osemka");
	plywak1.addApplication(&konkurencja1, "0:25,86");

	CPerson plywak2("Swimmer2", "Kowalski2", 1988, 1, "UKL Osemka");
	plywak2.addApplication(&konkurencja1, "0:25,86");

	CPerson plywak3("Swimmer3", "Kowalski3", 1988, 1, "UKL Osemka");
	plywak3.addApplication(&konkurencja1, "0:25,86");

	CPerson plywak4("Swimmer4", "Kowalski4", 1988, 1, "UKL Osemka");
	plywak4.addApplication(&konkurencja1, "0:25,86");

	CPerson plywak5("Swimmer5", "Kowalski5", 1988, 1, "UKL Osemka");
	plywak5.addApplication(&konkurencja1, "0:25,86");

	CPerson plywak6("Swimmer6", "Kowalski6", 1988, 1, "UKL Osemka");
	plywak6.addApplication(&konkurencja1, "0:25,86");

	CPerson plywak7("Swimmer7", "Kowalski7", 1988, 1, "UKL Osemka");
	plywak7.addApplication(&konkurencja1, "0:25,86");

	CPerson plywak8("Swimmer8", "Kowalski8", 1988, 1, "UKL Osemka");
	plywak8.addApplication(&konkurencja1, "0:25,86");

	CPerson plywak9("Swimmer9", "Kowalski9", 1988, 1, "UKL Osemka");
	plywak9.addApplication(&konkurencja1, "0:25,86");

	CPerson plywak10("Swimmer10", "Kowalski10", 1988, 1, "UKL Osemka");
	plywak10.addApplication(&konkurencja1, "0:25,86");

	CPerson plywak11("Swimmer11", "Kowalski11", 1988, 1, "UKL Osemka");
	plywak11.addApplication(&konkurencja1, "0:25,86");

	cout << "**********\n\n";


	CTournament * p_CTournamentInstance = CTournament::getInstance();
        p_CTournamentInstance->printRegisteredPersons();
        p_CTournamentInstance->printRegisteredCompetitions();

	string s = "00:18,35";
	string tmp = s.erase(s.find(':'),1) ;
	tmp = tmp.erase(s.find(','),1) ;
	cout << tmp << endl << stoi( tmp ) << endl << endl;


	s = "00:00,01";
	tmp = s.erase(s.find(':'),1) ;
	tmp = tmp.erase(s.find(','),1) ;
	cout << tmp << endl << stoi( tmp );

	return 0;
}

