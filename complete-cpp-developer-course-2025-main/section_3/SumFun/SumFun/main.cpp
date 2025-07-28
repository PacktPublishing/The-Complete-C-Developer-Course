#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int input;

	cout << "Enter a non-negative integer (or a negative number to quit): ";
	cin >> input;

	while (input >= 0) {
		sum += input;
		cout << "Enter another (or negative to quit): ";
		cin >> input;
	}//end while

	cout << "The sum of all entered values is: " << sum << endl;

	return 0;
}