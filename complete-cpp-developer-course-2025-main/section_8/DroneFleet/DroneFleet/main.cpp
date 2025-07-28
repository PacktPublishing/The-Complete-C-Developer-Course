#include <iostream>
#include "Drone.h"
using namespace std;

void printFleet(Drone** fleet, int size);

int main() {
	int numDrones = 0;
	string model;
	double battery = 0.0;

	cout << "How many drones are in your fleet?  ";
	cin >> numDrones;

	Drone** droneFleet = new Drone* [numDrones];

	for (int i = 0; i < numDrones; i++) {
		cout << "Enter model name for drone " << (i + 1) << ": ";
		cin.get();
		getline(cin, model);

		cout << "Enter battery life (as a percentage) for " << model << ":  ";
		cin >> battery;

		droneFleet[i] = new Drone(model, battery);
	} // end of the for loop

	cout << "\nDrone Fleet Summary:" << endl;
	printFleet(droneFleet, numDrones);

	// cleanup
	for (int i = 0; i < numDrones; i++) {
		delete droneFleet[i];
		droneFleet[i] = nullptr;
	}

	delete[] droneFleet;


	return 0;
}


void printFleet(Drone** fleet, int size) {
	for (int i = 0; i < size; i++) {
		cout << "Drone " << (i + 1) << ": " << fleet[i]->getModelName()
			<< " | Battery: " << fleet[i]->getBatteryLife() << "%" << endl;
	}
}