#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void printFormatted(ofstream& outfile, int highNum);

int main() {
	int highNum;
	cout << "Enter a high number:  ";
	cin >> highNum;

	cout << "Writing to file..." << endl;

	ofstream outfile("output.txt");  

	if (!outfile) {
		cerr << "Error: Could not open file for writing." << endl;
		return 1;
	}

	cout << fixed << showpoint;
	outfile << fixed << showpoint;

	printFormatted(outfile, highNum);
	//outfile << "Hello world!" << endl;

	outfile.close();  
	cout << "Done" << endl;

	return 0;
}

void printFormatted(ofstream& outfile, int highNum) {
	for (int i = 1; i <= highNum; i++) {
		double value1 = i * 5.7575;
		double value2 = i * 3.14159;

		cout << setw(12) << setprecision(2) << value1
			<< setw(12) << setprecision(3) << value2 << endl;

		outfile << setw(12) << setprecision(2) << value1
			<< setw(12) << setprecision(3) << value2 << endl;
	}
}