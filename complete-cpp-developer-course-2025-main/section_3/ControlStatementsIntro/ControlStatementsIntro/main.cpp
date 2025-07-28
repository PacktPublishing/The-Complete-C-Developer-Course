#include <iostream>
using namespace std;

int main() {

	int age;
	age = 17;
	cout << "Your age is: " << age << endl;

	if (age >= 16) {
		cout << "You can drive!" << endl;
	}
	else {
		cout << "You cannot drive yet!" << endl;
	}

	for (int i = 1; i <= age; i++) {
		cout << "Happy birthday!" << endl;
	}

	return 0;
}