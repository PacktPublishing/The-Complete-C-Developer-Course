#include <iostream>
#include "Exhibit.h"
using namespace std;


int main() {
	const int EXHIBIT_COUNT = 3;
	Exhibit* exhibitPtrs[EXHIBIT_COUNT];

	exhibitPtrs[0] = new Exhibit("T-Rex Skeleton", 101, 350.5);
	exhibitPtrs[1] = new Exhibit("Ancient Egypt", 204, 480.25);
	exhibitPtrs[2] = new Exhibit("Space Exploration", 309, 290.75);

	for (int i = 0; i < EXHIBIT_COUNT; i++) {
		cout << "Exhibit: " << exhibitPtrs[i]->getName() << endl;
		cout << "\tRoom: " << exhibitPtrs[i]->getRoomNumber() << endl;
		cout << "\tDisplay Size (sq ft): " << exhibitPtrs[i]->getDisplaySize() << endl;
		cout << endl;
	}//end for

	for (int i = 0; i < EXHIBIT_COUNT; i++) {
		delete exhibitPtrs[i];
		exhibitPtrs[i] = nullptr;
	}

	return 0;
}