#include <iostream>
using namespace std;

void valueChanged1(int someNum);
void valueChanged2(int& someNum);  // & means 'pass by reference'

int main() {
	int myNumber = 20;

	cout << "Before valueChanged1 call, myNumber is " << myNumber << endl;
	valueChanged1(myNumber);
	cout << "After valueChanged1 call, myNumber is " << myNumber << endl;

	cout << "\n-------------------------------------------\n";

	cout << "Before valueChanged2 call, myNumber is " << myNumber << endl;

	valueChanged2(myNumber);

	cout << "After valueChanged2 call, myNumber is " << myNumber << endl;

	return 0;
}

void valueChanged1(int someNum) {
	someNum = 100;
	cout << "Inside valueChanged1, someNum is " << someNum << endl;
}

void valueChanged2(int& someNum) {
	someNum = 100;
	cout << "Inside valueChanged2, someNum is " << someNum << endl;
}