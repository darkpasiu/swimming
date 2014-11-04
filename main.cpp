#include <iostream>

#include "CPerson.h"

using namespace std;

int main(){
	
	cout << "^^'\n";
	CPerson plywak1("Jan", "Kowalski", 1988, 1, "UKL Osemka");
	CPerson plywak2("Jacek", "Walski", 1989, 1, "Wodnik Police");
	CPerson plywak3("Kamila", "Wojdak", 1989, 0, "Wodnik Police");

	plywak1.printPersonInfo();
	plywak2.printPersonInfo();
	plywak3.printPersonInfo();

	return 0;
}
