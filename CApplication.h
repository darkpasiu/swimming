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
	/* 1 application is used, 0 application is not used */
	bool m_bIsCurrentlyUsed;
	CCompetition * m_pCCompetition;

 	public:
	void printApplicationInfo();

	/* CONSTRUCTOR */
	CApplication(string a_szApplicationResult, unsigned int = 0, unsigned int = 0, CCompetition * = 0, bool = 0);

	/* SET */
	void setApplicationResult(string);
	void setFinalResult(string);
	void setTrack(unsigned int);
	void setSeries(unsigned int);
	void setCompetition(CCompetition *);
	void setAsUsed();
	void setAsUnUsed();

	/* GET */
	string & getApplicationResult();
	string & getFinalResult();
	unsigned int & getTrack();
	unsigned int & getSeries();
	CCompetition * getCompetition();
	bool & getIsCurrentlyUsed();
};


#endif
