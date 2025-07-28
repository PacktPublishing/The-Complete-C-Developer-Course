#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream nameFile("names.txt");
	ifstream ageFile("ages.txt");
	ofstream outfile("output.txt");

	if (!nameFile || !ageFile) {
		cerr << "Problem opening one of the input files.  Exiting." << endl;
		return 1;
	}

	string tempName;
	int tempAge;

	while (getline(nameFile, tempName) && (ageFile >> tempAge)) {
		outfile << tempName << " " << tempAge << endl;
	}


	nameFile.close();
	ageFile.close();
	outfile.close();
	cout << "Done writing to output.txt!" << endl;

	return 0;
}