#include <iostream>
#include <stdexcept>
#include "FuelLevelCritical.h"
using namespace std;

void checkFuelLevel(int percentage);

int main() {

	cout << "Fuel Monitor Starting..." << endl;

	try {
		for (int i = 100; i >= 0; i -= 10) {
			checkFuelLevel(i);
		}
	}
	catch (const FuelLevelCritical& err) {
		cout << "ALERT: " << err.what() << endl;
	}

	return 0;
}

void checkFuelLevel(int percentage) {
	if (percentage < 10) {
		throw FuelLevelCritical();
	}

	cout << "Fuel level at " << percentage << "% - within safe operating range." << endl;
}