#ifndef _roster_h
#define _roster_h
#include "student.h"
using namespace std;

class Roster {
public:
	Roster();
	~Roster();
	void add(string studentID, string firstName, string lastName, string emailAddress,
		int age, int daysInCourse1, int daysInCourse2, int daysInCourse3,
		DegreeProgram degreeProgram);
	void remove(string studentID);

	void parseString(string str);
	void printAll();
	void printInvalidEmails();
	void printAverageDaysInCourse(string studentID);
	void printByDegreeProgram(DegreeProgram degreeProgram);

	Student** classRosterArray = new Student * [5];

private:
	int studentCount;
	string studentData[9];

	void addStudent();
};


#endif