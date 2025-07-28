#include "Student.h"

Student::Student(string firstName, string lastName, double gpa) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->gpa = gpa;
}

string Student::getFullName() const {
	return firstName + " " + lastName;
}

double Student::getGPA() const {
	return gpa;
}