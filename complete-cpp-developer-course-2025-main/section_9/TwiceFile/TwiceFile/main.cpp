#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream infile("input.txt");
	ofstream outfile("output.txt");

	if (!infile) {
		cerr << "Error opening input file" << endl;
		return 1;
	}

	int tempNum;

	while (infile >> tempNum) {
		outfile << (tempNum * 2) << endl;
	}

	infile.close();
	outfile.close();

	cout << "Doubled values written to output.txt!" << endl;

	return 0;
}