#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

void fillVector(vector<int>& myVector);
void printVector(const vector<int>& myVector);
void countFives(const vector<int>& myVector);

int main() {

	vector<int> myVector;

	fillVector(myVector);
	printVector(myVector);

	countFives(myVector);

	cout << "\nReplacing 5s with 99s" << endl;
	replace(myVector.begin(), myVector.end(), 5, 99);

	countFives(myVector);
	printVector(myVector);

	cout << "\nNow sorting vector..." << endl;
	sort(myVector.begin(), myVector.end());
	printVector(myVector);


	return 0;
}

void fillVector(vector<int>& myVector) {
	srand(time(nullptr));
	for (int i = 0; i < 20; ++i) {
		myVector.push_back(rand() % 5 + 1);  // 1 to 5
	}
}

void printVector(const vector<int>& myVector) {
	for (int value : myVector) {
		cout << value << " ";
	}
}

void countFives(const vector<int>& myVector) {
	int countOfFives = count(myVector.begin(), myVector.end(), 5);
	cout << "Number of 5s: " << countOfFives << endl;
}