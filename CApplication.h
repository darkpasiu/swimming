// CApplication.h
#ifndef APPLICATION
#define APPLICATION

#include <iostream>

using namespace std;

class CApplication {
	
	private:
	string m_szApplicationResult;
	string m_szFinalResult;
	unsigned int m_uiPersonID;
	unsigned int m_uiTrack;
	unsigned int m_uiSeries;

 	public:
	void printApplicationInfo();

	/* CONSTRUCTOR */
	CApplication(string, unsigned int, unsigned int, unsigned int);

	/* SET */
	void setApplicationResult(string);
	void setFinalResult(string);
	void setTrack(unsigned int);
	void setSeries(unsigned int);

	/* GET */
	string & getApplicationResult();
	string & getFinalResult();
	unsigned int & getPersonID();
	unsigned int & getTrack();
	unsigned int & getSeries();
};


#endif
