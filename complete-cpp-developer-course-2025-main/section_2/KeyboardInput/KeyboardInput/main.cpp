#include <iostream>
#include <string>
using namespace std;

int main() {

	int age;
	string fullName;

	cout << "Please enter your age: " << endl;
	cin >> age;

	cout << "You are " << age << " years old." << endl;

	cout << "Please enter your full name: " << endl;
	cin.get();

	getline(cin, fullName);
	cout << "Hello, " << fullName << "!" << endl;

	return 0;
}