// CStartingNote.h
#ifndef STARTINGNOTE 
#define STARTINGNOTE

#include <iostream>

using namespace std;


class CStartingNote
{
	private:
	string m_szApplicationResult;
	string m_szFinalResult;
	unsigned int m_uiCompetitionID;
	unsigned int m_uiTrack;
	unsigned int m_uiSeries;

	public:
	void printInfo();
	unsigned int convertTimeToInt(string);

	/* SET */
	void setApplicationResult(string);
	void setFinalResult(string);
	void setTrack(unsigned int);
	void setSeries(unsigned int);

	/* GET */
	string & getApplicationResult();
	string & getFinalResult();
	unsigned int & getTrack();
	unsigned int & getSeries();

	/* CONSTRUCTOR */
	CStartingNote(string, unsigned int = 0, unsigned int = 0);

	/* DESTRUCTOR */
	~CStartingNote();
};


#endif
