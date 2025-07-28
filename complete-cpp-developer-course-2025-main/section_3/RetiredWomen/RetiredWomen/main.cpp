#include <iostream>
using namespace std;

int main() {

	int age;
	char gender;

	cout << "Welcome to the Retired Women's Club Discount Checker!" << endl;

	cout << "Please enter your age: ";
	cin >> age;

	cout << "Please enter your gender (M/F): ";
	cin >> gender;

	if ((age >= 60) && (gender == 'f' || gender == 'F')) {
		cout << "You are eligible for the Retired Women's Club Discount!" << endl;
	}
	else {
		cout << "Sorry, you are not eligible for the discount." << endl;
	}

	return 0;
}