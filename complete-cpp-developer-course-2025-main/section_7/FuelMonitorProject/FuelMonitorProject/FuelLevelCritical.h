#ifndef FUEL_LEVEL_CRITICAL_H
#define FUEL_LEVEL_CRITICAL_H

#include <stdexcept>
using namespace std;

class FuelLevelCritical : public runtime_error {

	public:
		FuelLevelCritical() : 
			runtime_error("Fuel level is critically low! Ship must refuel immediately!") {

		}
};

#endif 
