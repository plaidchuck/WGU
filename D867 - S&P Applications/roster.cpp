#include <iostream>
#include <string>
#include "roster.h"
using namespace std;

//Constructor

Roster::Roster() {
	//Initialize student pointers in roster pointer array
	for (int i = 0; i < 5; ++i) {
		classRosterArray[i] = NULL;
	}

	//Initialize string elements in studentData array
	for (int i = 0; i < 9; ++i) {
		studentData[i] = "";
	}

	//Initialize count for first student in pointer array
	studentCount = 0;
}

Roster::~Roster() {
	for (int i = 0; i < 5; ++i) {
		delete(classRosterArray[i]);
	}
	delete[] classRosterArray;
}

//Receive student object data as params and add student object to pointer array
void Roster::add(string studentID, string firstName, string lastName, string emailAddress,
	int age, int daysInCourse1, int daysInCourse2, int daysInCourse3,
	DegreeProgram degreeProgram) {

	classRosterArray[studentCount] = new Student(studentID, firstName, lastName, emailAddress,
		age, daysInCourse1, daysInCourse2, daysInCourse3,
		degreeProgram);

	studentCount++;
}

void Roster::remove(string studentID) {
	bool studentIDExists = false;
	for (int i = 0; i < 5; ++i) {
		if (classRosterArray[i] == nullptr) {
			continue;
		}
		if (classRosterArray[i]->getStudentID() == studentID) {
			studentIDExists = true;
			cout << "Removing " << studentID << endl;
			classRosterArray[i] = nullptr;
		}
	}
	if (!studentIDExists) {
		cout << studentID << " not found!" << endl;
	}
}

//parse string using commas as delimiters into array
void Roster::parseString(string str) {
	int start = 0;
	int end = 0;
	int lastComma = 0;
	int studentDataIndex = 0;
	while (str.find(',', start) != string::npos) {
		lastComma = str.find(",", start);
		end = lastComma - start;
		studentData[studentDataIndex] = str.substr(start, end);
		start = lastComma + 1;
		studentDataIndex++;
	}
	studentData[studentDataIndex] = str.substr(start);

	// Call helper function to send parameters to add() function
	addStudent();
}

void Roster::printAll() {
	for (int i = 0; i < 5; ++i) {
		if (classRosterArray[i] != nullptr) {
			classRosterArray[i]->print();
		}
	}
}

void Roster::printInvalidEmails() {
	string emailAddress;
	for (int i = 0; i < 5; ++i) {
		emailAddress = classRosterArray[i]->getEmailAddress();

		if ((emailAddress.find('@') == string::npos) || (emailAddress.find('.') == string::npos) 
			|| (emailAddress.find(' ') != string::npos)) {

				cout << "Invalid Email:  " << emailAddress << endl;
			}
		}
	cout << endl;
}

void Roster::printAverageDaysInCourse(string studentID) {
	int* daysInCourseForAverage = NULL;
	int sum = 0;

	for (int i = 0; i < 5; ++i) {
		if (classRosterArray[i]->getStudentID() == studentID) {
			daysInCourseForAverage = classRosterArray[i]->getDaysInCourse();
			sum += daysInCourseForAverage[0];
			sum += daysInCourseForAverage[1];
			sum += daysInCourseForAverage[2];

			cout << studentID << ": " << (double)sum / 3 << endl;
			break;
		}
	}
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
	string program;
	if (degreeProgram == SECURITY) {
		program = "Security";
	}
	else if (degreeProgram == NETWORK) {
		program = "Networking";
	}
	else {
		program = "Software";
	}
	
	cout << "Degree Program" << endl;

	for (int i = 0; i < 5; ++i) {
		if (classRosterArray[i]->getDegreeProgram() == program) {
			classRosterArray[i]->print();
		}
	}
	cout << endl;
}

/*Private helper to retrieve student variables in each studentData element and set variables to be
sent to add function for student object creation */

void Roster::addStudent() {
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;

	int age;
	int daysInCourse1;
	int daysInCourse2;
	int daysInCourse3;
	
	//Enums represent 0, 1, 2
	DegreeProgram degreeProgram;

	//String student data
	studentID = studentData[0];
	firstName = studentData[1];
	lastName = studentData[2];
	emailAddress = studentData[3];

	//Convert strings to int for age and days in course
	age = stoi(studentData[4]);
	daysInCourse1 = stoi(studentData[5]);
	daysInCourse2 = stoi(studentData[6]);
	daysInCourse3 = stoi(studentData[7]);

	//Convert strings to DeegreProgram enum
	if (studentData[8] == "SECURITY") {
		degreeProgram = SECURITY;
	}
	else if (studentData[8] == "NETWORK") {
		degreeProgram = NETWORK;
	}
	else {
		degreeProgram = SOFTWARE;
	}
	
	this->add(studentID, firstName, lastName, emailAddress, age,
		daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
}
