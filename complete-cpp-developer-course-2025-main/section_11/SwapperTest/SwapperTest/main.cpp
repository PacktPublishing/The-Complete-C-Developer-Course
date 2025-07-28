#include <iostream>
#include <string>
#include "Swapper.h"
using namespace std;

int main() {
	Swapper<int> intSwapper(5, 10);
	Swapper<string> stringSwapper("John", "Bob");

	cout << "Before swap:" << endl;
	cout << "\t" << intSwapper.getFirst() << ", "
		<< intSwapper.getSecond() << endl;
	cout << "\t" << stringSwapper.getFirst() << ", "
		<< stringSwapper.getSecond() << endl;


	intSwapper.swap();
	stringSwapper.swap();

	cout << "\nAfter swap:" << endl;
	cout << "\t" << intSwapper.getFirst() << ", "
		<< intSwapper.getSecond() << endl;
	cout << "\t" << stringSwapper.getFirst() << ", "
		<< stringSwapper.getSecond() << endl;


	return 0;
}
