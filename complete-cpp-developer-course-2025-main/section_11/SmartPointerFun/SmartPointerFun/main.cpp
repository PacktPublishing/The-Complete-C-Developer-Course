#include <iostream>
#include <memory>
#include <utility>
using namespace std;

int main() {
	const int ARR_SIZE = 5;

	//unique_ptr<double> myDubPtr(new double);
	unique_ptr<double> myDubPtr = make_unique<double>();
	//auto myArray = make_unique<int[]>(ARR_SIZE);

	*myDubPtr = 3.14;
	cout << "Pointer value: " << *myDubPtr << endl;

	unique_ptr<double> otherPtr = move(myDubPtr);
	cout << "otherPtr: " << *otherPtr << endl;

	//for (int i = 0; i < ARR_SIZE; i++) {
	//	myArray[i] = i * 2;
	//}

	//for (int i = 0; i < ARR_SIZE; i++) {
	//	cout << myArray[i] << endl;
	//}

	return 0;
}