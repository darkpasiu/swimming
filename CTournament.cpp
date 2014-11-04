// CTournament.cpp
#include "CTournament.h"

using namespace std;

CTournament * CTournament::instance = 0;

CTournament * CTournament::getInstance()
{
	if(CTournament::instance == 0)
	instance = new CTournament();

	return instance;
}

