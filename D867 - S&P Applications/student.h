#ifndef _student_h
#define _student_h
#include "degree.h"
using namespace std;

class Student {
public:
	//Constructor
	Student(string studentID, string firstName, string lastName, 
		string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram program);

	// Getters
	string getStudentID() const;
	string getFirstName() const;
	string getLastName() const;
	string getEmailAddress() const;
	int getAge() const;

	//returns array for days in course from student object
	int* getDaysInCourse();

	string getDegreeProgram() const;

	//prints formatted data for one student object
	void print() const;
	
	
	// Setters
	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setDaysInClass(int daysInCourse1, int daysInCourse2, int daysInCourse3);
	void setDegreeProgram(DegreeProgram program);
	


private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse[3] = { 0 };
	DegreeProgram program;

	//parallel string array for each enum number of DegreeProgram {0, 1, 2}
	string degreeProgram[3] = {"Security", "Networking", "Software"};
};

#endif
