#include <iostream>
using namespace std;

void threeTimesN(int input, int& output);

int main() {

	int myInput = 50;
	int myOutput;

	threeTimesN(myInput, myOutput);

	cout << "After threeTimesN, myOuput is " << myOutput << endl;

	return 0;
}

void threeTimesN(int input, int& output) {
	output = input * 3;
}