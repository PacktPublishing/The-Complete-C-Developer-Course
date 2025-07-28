#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include "Student.h"
using namespace std;

int main() {
	ifstream infile("students.txt");

	if (!infile) {
		cerr << "Failed to open students.txt" << endl;
		return 1;
	}

	vector<Student*> roster;
	string first;
	string last;
	double gpa;

	while (infile >> first >> last >> gpa) {
		if (gpa >= 0.0 && gpa <= 4.0) {
			Student* s = new Student(first, last, gpa);
			roster.push_back(s);
		}
	}

	infile.close();

	cout << fixed << showpoint << setprecision(2);
	cout << "Student Roster: " << endl;
	cout << "---------------------------------" << endl;

	double sum = 0;
	int honors = 0;

	for (Student* s : roster) {
		cout << setw(20) << left << s->getFullName()
			<< "GPA: " << s->getGPA() << endl;

		sum += s->getGPA();

		if (s->getGPA() >= 3.5) {
			honors++;
		}
	}//end for

	double avgGPA = (roster.size() > 0) ? sum / roster.size() : 0.0;

	cout << "\nClass Average GPA: " << avgGPA << endl;
	cout << "Honor Roll Students: " << honors << endl;

	//cleanup

	for (Student* s : roster) {
		delete s;
	}

	roster.clear();

	return 0;
}