#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;

int main() {
	ifstream infile("genres.txt");

	if (!infile) {
		cerr << "Error opening genres.txt.  Aborting..." << endl;
		return 1;
	}

	map<string, int> genreCounts;
	string genre;
	int total = 0;

	while (infile >> genre) {
		genreCounts[genre]++;
		total++;
	}

	infile.close();

	cout << fixed << showpoint << setprecision(2);
	cout << "\nMovie Genre Preferences" << endl;
	cout << "------------------------------" << endl;
	cout << left << setw(15) << "Genre"
		<< right << setw(10) << "Count"
		<< setw(12) << "Percent" << endl;

	cout << "------------------------------" << endl;

	for (const auto& pair : genreCounts) {
		double percent = (static_cast<double>(pair.second) / total) * 100.0;

		cout << left << setw(15) << pair.first
			<< right << setw(10) << pair.second
			<< setw(11) << percent << "%" << endl;
	}

	cout << "------------------------------" << endl;
	cout << "Total responses: " << total << endl;


	return 0;
}