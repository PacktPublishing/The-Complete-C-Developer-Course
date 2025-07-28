#include <iostream>
using namespace std;

int main() {

	//int* myIntPtr = new int(123);
	int* myIntPtr = new int;
	bool* myBoolPtr = new bool;

	*myBoolPtr = true;

	*myIntPtr = 123;

	cout << *myIntPtr << endl;

	cout << boolalpha;

	cout << *myBoolPtr << endl;

	delete myIntPtr;
	delete myBoolPtr;

	myIntPtr = nullptr;
	myBoolPtr = nullptr;

	return 0;
}