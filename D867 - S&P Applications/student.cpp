#include <iostream>
#include <string>
#include "student.h"
using namespace std;

//Constructor
Student::Student(string studentID, string firstName, string lastName,
	std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram program) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	
	this->daysInCourse[0] = daysInCourse1;
	this->daysInCourse[1] = daysInCourse2;
	this->daysInCourse[2] = daysInCourse3;

	this->program = program;
}

//Getters
string Student::getStudentID() const{
	return studentID;
}

string Student::getFirstName() const {
	return firstName;
}
string Student::getLastName() const {
	return lastName;
}
string Student::getEmailAddress() const {
	return emailAddress;
}
int Student::getAge() const {
	return age;
}
int* Student::getDaysInCourse() {
	return daysInCourse;
}
void Student::print() const {
	cout << this->getStudentID() << "	" << "First Name: " << this->getFirstName() << "\t"
		<< "Last Name: " << this->getLastName() << "\t" << "Age: " << this->getAge() << "\t"
		<< "Days in course: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "} "
 		<< "Degree Program: " << this->getDegreeProgram() << endl;
}

//Setters
void Student::setStudentID(string studentID) {
	this->studentID = studentID;
}

void Student::setFirstName(string firstName) {
	this->firstName = firstName;
}
void Student::setLastName(string lastName) {
	this->lastName = lastName;
}

void Student::setEmailAddress(string emailAddress) {
	this->emailAddress = emailAddress;
}

void Student::setAge(int age) {
	this->age = age;
}

void Student::setDaysInClass(int daysInCourse1, int daysInCourse2, int daysInCourse3) {
	this->daysInCourse[0] = daysInCourse1;
	this->daysInCourse[1] = daysInCourse2;
	this->daysInCourse[2] = daysInCourse3;
}
void Student::setDegreeProgram(DegreeProgram program) {
	this->program = program;
}

//returns string of degree program name based on enum number {0,1,2}
string Student::getDegreeProgram() const {
	return degreeProgram[program];
}

