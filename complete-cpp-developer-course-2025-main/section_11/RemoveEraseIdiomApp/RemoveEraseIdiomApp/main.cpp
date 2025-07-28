#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(const vector<int>& vec);

int main() {
	vector<int> numbers = { 1, 2, 3, 2, 4, 2, 5, 2 };

	cout << "Original vector: ";
	printVector(numbers);

	//step 1: use remove
	auto newEnd = remove(numbers.begin(), numbers.end(), 2);

	//step 2: erase them from container
	numbers.erase(newEnd, numbers.end());

	cout << "Vector after removing all 2s: ";
	printVector(numbers);

	return 0;
}

void printVector(const vector<int>& vec) {
	for (int value : vec) {
		cout << value << " ";
	}
	cout << endl;
}