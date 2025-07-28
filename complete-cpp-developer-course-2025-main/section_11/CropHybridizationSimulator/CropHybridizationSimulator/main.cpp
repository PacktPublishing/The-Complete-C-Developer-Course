#include <iostream>
#include <vector>
#include <memory>
#include "Crop.h"
using namespace std;

void printCrop(const Crop& crop);

int main() {
	vector<unique_ptr<Crop>> crops;

	crops.push_back(make_unique<Crop>(30, 40, 20));
	crops.push_back(make_unique<Crop>(25, 50, 15));
	crops.push_back(make_unique<Crop>(32, 38, 22));

	Crop hybrid = *crops[0] + *crops[1];

	cout << "Crop 1:" << endl;
	printCrop(*crops[0]);

	cout << "Crop 2:" << endl;
	printCrop(*crops[1]);

	cout << "Crop 3:" << endl;
	printCrop(*crops[2]);

	cout << "Hybrid crop:" << endl;
	printCrop(hybrid);

	cout << boolalpha;
	cout << "Hybrid == Crop 3?" << (hybrid == *crops[2]) << endl;
	cout << "Hybrid > Crop 3?" << (hybrid > *crops[2]) << endl;

	return 0;
}

void printCrop(const Crop& crop) {
	cout << "Height: " << crop.getHeight()
		<< ", Yield: " << crop.getYield()
		<< ", Drought Resistance: " << crop.getDroughtResistance()
		<< ", Score: " << crop.getScore() << endl << endl;
}