#include <iostream>
using namespace std;

int imBroken(int num1, int num2);

int main() {
	int a;

	try {
		a = imBroken(10, 5);
		cout << a << endl;

		a = imBroken(10, 0);   //will cause exception
		cout << a << endl;
	}
	catch (invalid_argument& err) {
		cout << "Exception caught: " << err.what() << endl;
	}

	return 0;
}

int imBroken(int num1, int num2) {
	int result = 0;

	if (num2 != 0) {
		result = num1 / num2;
	}
	else {
		throw invalid_argument("Cannot divide by 0");
	}

	return result;
}