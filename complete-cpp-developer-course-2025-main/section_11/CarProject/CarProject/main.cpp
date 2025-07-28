#include <iostream>
#include "Car.h"

int main() {
	
	auto myCarPtr = make_unique<Car>("red", 4);

	cout << "Color: " << myCarPtr->getColor() << endl;
	cout << "Doors: " << myCarPtr->getNumDoors() << endl;


	return 0;
}