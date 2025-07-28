#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
	int inputNum;
	int sum = 0;
	vector<int> myInts;

	ifstream infile("input.txt");

	if (!infile) {
		cerr << "Could not open file." << endl;
		return 1;
	}

	while (infile >> inputNum) {    // while(!infile.eof()) 
		myInts.push_back(inputNum);
		sum += inputNum;
	} // end while

	for (int num : myInts) {
		cout << num << endl;
	}

	cout << "Sum of numbers is: " << sum << endl;

	infile.close();

	return 0;
}
