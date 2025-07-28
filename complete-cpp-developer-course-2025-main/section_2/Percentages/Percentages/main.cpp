#include <iostream>
#include <string>
using namespace std;

int main() {

	string fullName;
	string location;
	int initialScore;

	cout << "Please enter your full name: " << endl;
	getline(cin, fullName);

	cout << "Please enter your city, state/province, and country: " << endl;
	getline(cin, location);

	cout << "Please enter your score (0 to 100): " << endl;
	cin >> initialScore;

	cout << "Hello, " << fullName << endl;
	cout << "We heard you are from " << location << endl;
	cout << "Your original score is " << initialScore
		<< ", but with five points added, your score is "
		<< (initialScore + 5) << endl;

	return 0;
}