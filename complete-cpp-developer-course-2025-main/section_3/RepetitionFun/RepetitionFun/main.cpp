#include <iostream>
using namespace std;

int main() {

	// while
	int count = 0;

	while (count < 10) {
		cout << "Count: " << count << endl;
		count++;
	}

	// do-while
	int counter2 = 100;

	do {
		cout << "Counter2: " << counter2 << endl;
		counter2++;
	} while (counter2 < 10);

	// for loop
	for (int i = 0; i < 10; i++) {
		cout << "i is " << i << endl;
	}

	// sentinel-controlled repetition

	int input;

	cout << "Enter a non-negative integer (or a negative number to quit):";
	cin >> input;

	while (input >= 0) {
		cout << "You entered: " << input << endl;
		cout << "Enter another (or negative to quit): ";
		cin >> input;
	}

	return 0;
}