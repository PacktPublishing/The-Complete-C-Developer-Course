#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	const int NUM_MOVIES = 5;

	vector<string> movies;
	vector<int> ratings;

	string tempTitle;
	int tempRating;

	for (int i = 0; i < NUM_MOVIES; i++) {
		cout << "Enter the title of movie #" << (i + 1) << ": ";
		getline(cin, tempTitle);

		cout << "Enter the rating for \"" << tempTitle << "\" (1-10): ";
		cin >> tempRating;
		cin.get();

		movies.push_back(tempTitle);
		ratings.push_back(tempRating);
	}//end for

	cout << "\nHere are your movie ratings:\n";

	for (int i = 0; i < NUM_MOVIES; i++) {
		cout << "You rated \"" << movies[i] << "\" a "
			<< ratings[i] << "/10." << endl;
	}

	return 0;
}