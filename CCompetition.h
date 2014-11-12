// CCompetition.h
#ifndef COMPETITION
#define COMPETITION

using namespace std;

/* forward declaration */
class CRegistration;

class CCompetition {

	private:
	bool m_bGender;
	vector<CRegistration *> m_RegisteredVector;

	public:
	void printInfo();
	void addRegistration(CRegistration *);
	void removeRegistration(CRegistration *);

	/* CONSTRUCTOR */
	CCompetition(string);

	/* SET */
	void setCompetition(string);
	void setGender(bool);

	/* GET */
	string & getName();
	bool & getGender();
};

#endif
