// CApplication.h
#ifndef APPLICATION
#define APPLICATION

#include <iostream>

using namespace std;

class CCompetition;

class CApplication {
	
	private:
	string m_szApplicationResult;
	string m_szFinalResult;
	unsigned int m_uiCompetitionID;
	unsigned int m_uiTrack;
	unsigned int m_uiSeries;
	CCompetition * m_pCCompetition;

 	public:
	void printApplicationInfo();

	/* CONSTRUCTOR */
	CApplication(string, unsigned int, unsigned int, CCompetition *);

	/* SET */
	void setApplicationResult(string);
	void setFinalResult(string);
	void setTrack(unsigned int);
	void setSeries(unsigned int);
	void setCompetition(CCompetition *);

	/* GET */
	string & getApplicationResult();
	string & getFinalResult();
	unsigned int & getTrack();
	unsigned int & getSeries();
	CCompetition * getCompetition();
};


#endif
