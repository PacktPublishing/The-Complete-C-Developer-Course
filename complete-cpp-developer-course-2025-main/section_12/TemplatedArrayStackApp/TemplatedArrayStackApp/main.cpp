#include <iostream>
#include <string>
#include "ArrayStack.h"
using namespace std;

int main() {
	ArrayStack<string> words;

	words.push("apple");
	words.push("banana");
	words.push("cherry");

	while (!words.isEmpty()) {
		cout << words.pop() << endl;
	}

	cout << endl << endl;
	cout << "Now let's try integers!" << endl;

	ArrayStack<int> nums;
	nums.push(10);
	nums.push(20);
	nums.push(30);

	while (!nums.isEmpty()) {
		cout << nums.pop() << endl;
	}

	cout << endl << endl;
	cout << "Testing ArrayStack with doubles..." << endl;
	
	ArrayStack<double> decimals;
	decimals.push(3.14);
	decimals.push(2.718);
	decimals.push(1.618);

	cout << "Top of decimal stack: " << decimals.peek() << endl;

	while (!decimals.isEmpty()) {
		cout << decimals.pop() << endl;
	}


	return 0;
}