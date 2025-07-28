#include <iostream>
using namespace std;

int main() {
	int startYear;
	int endYear;

	cout << "Welcome to the Leap Year Checker!" << endl;
	
	cout << "Enter the starting year: ";
	cin >> startYear;

	cout << "Enter the ending year: ";
	cin >> endYear;

	for (int year = startYear; year <= endYear; year++) {
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
			cout << year << " is a leap year." << endl;
		}
		else {
			cout << year << " is not a leap year." << endl;
		}
	}

	return 0;
}