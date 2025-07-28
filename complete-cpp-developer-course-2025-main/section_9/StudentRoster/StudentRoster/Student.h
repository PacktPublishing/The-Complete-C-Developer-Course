#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
	public:
		Student(string firstName, string lastName, double gpa);
		string getFullName() const;
		double getGPA() const;

	private:
		string firstName;
		string lastName;
		double gpa;
};


#endif 
