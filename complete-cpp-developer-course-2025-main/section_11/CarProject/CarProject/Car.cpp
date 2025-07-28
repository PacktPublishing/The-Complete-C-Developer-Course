#include "Car.h"

Car::Car(string color, int numDoors) : color(color), numDoors(numDoors) {
}

string Car::getColor() const {
	return color;
}

int Car::getNumDoors() const {
	return numDoors;
}