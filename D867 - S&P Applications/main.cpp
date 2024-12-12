#include <iostream>
#include <string>
#include "roster.h"
#include "student.h"
using namespace std;


int main() {
	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Gary,Chidester,gchides@wgu.edu,43,14,62,36,SOFTWARE"
	};

	// Dynamically retrieve size of the studentDara string array
	int studentDataSize = sizeof(studentData) / sizeof(studentData[0]);

	cout << "C867: Scripting and Programming, C++" << endl;
	cout << "Gary Chidester" << endl;
	cout << "Student ID: " << endl;

	Roster classRoster;

	for (int i = 0; i < studentDataSize; ++i) {
		classRoster.parseString(studentData[i]);
	}

	classRoster.printAll();
	classRoster.printInvalidEmails();

	for (int i = 0; i < studentDataSize; ++i) {
		if (i == 0) {
			cout << "Average Days in Course" << endl;
		}
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getStudentID());
	}
	cout << endl;

	classRoster.printByDegreeProgram(SOFTWARE);

	classRoster.remove("A3");
	classRoster.printAll();
	classRoster.remove("A3");

	return 0;
}
