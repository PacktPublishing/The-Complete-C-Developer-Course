#include "Drone.h"

Drone::Drone(string modelName, double batteryLife) {
	this->modelName = modelName;
	this->batteryLife = batteryLife;
}

string Drone::getModelName() const {
	return modelName;
}

double Drone::getBatteryLife() const {
	return batteryLife;
}