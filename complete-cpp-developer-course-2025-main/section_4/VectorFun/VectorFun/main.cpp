#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<int> someVec;
	vector<string> anotherVec(3);

	someVec.push_back(1);
	someVec.push_back(2);
	someVec.push_back(3);

	cout << "someVec size: " << someVec.size() << endl;

	anotherVec[0] = "John";
	anotherVec[1] = "Bob";
	anotherVec[2] = "Sally";

	anotherVec.push_back("Shannon");

	for (int val : someVec) {
		cout << val << endl;
	}

	cout << endl;

	for (string name : anotherVec) {
		cout << name << endl;
	}

	cout << endl;
	cout << "Front and back of anotherVec:" << endl;
	cout << "front: " << anotherVec.front() << endl;
	cout << "back: " << anotherVec.back() << endl;

	anotherVec.pop_back();
	anotherVec.insert(anotherVec.begin(), "Don");

	cout << "\nAfter modification: " << endl;
	cout << "front: " << anotherVec.front() << endl;
	cout << "back: " << anotherVec.back() << endl;

	return 0;
}