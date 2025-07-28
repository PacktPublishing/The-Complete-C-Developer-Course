#include <iostream>
using namespace std;

int main() {
	// >   Greater than
	// <   Less than
	// >=  Greater than or equal to
	// <=  Less than or equal to
	// ==  Equal to
	// !=  Not equal to

	cout << boolalpha;

	int a = 15;
	int b = 20;

	cout << (a < b) << endl;

	// equal to
	bool areEqual = (a == b);
	cout << areEqual << endl;

	// challenge 

	int age = 17;
	cout << (age >= 21) << endl;


	return 0;
}