#ifndef DRONE_H
#define DRONE_H

#include <string>
using namespace std;

class Drone {
	public:
		Drone(string modelName, double batteryLife);
		string getModelName() const;
		double getBatteryLife() const;

	private:
		string modelName;
		double batteryLife;
};

#endif
