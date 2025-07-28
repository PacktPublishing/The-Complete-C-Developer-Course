#include "Crop.h"
#include <cstdlib>
#include <ctime>

using namespace std;

Crop::Crop(int height, int yield, int droughtResistance) : height(height), yield(yield), 
droughtResistance(droughtResistance) {
}

int Crop::getHeight() const {
	return height;
}

int Crop::getYield() const {
	return yield;
}

int Crop::getDroughtResistance() const {
	return droughtResistance;
}

int Crop::getScore() const {
	return (height * 2) + (yield * 3) + (droughtResistance * 4);
}

bool Crop::operator==(const Crop& other) const {
	return getScore() == other.getScore();
}

bool Crop::operator!=(const Crop& other) const {
	return !(*this == other);
}

bool Crop::operator<(const Crop& other) const {
	return getScore() < other.getScore();
}

bool Crop::operator>(const Crop& other) const {
	return getScore() > other.getScore();
}

bool Crop::operator<=(const Crop& other) const {
	return getScore() <= other.getScore();
}

bool Crop::operator>=(const Crop& other) const {
	return getScore() >= other.getScore();
}

Crop Crop::operator+(const Crop& other) const {
	srand(time(nullptr));
	auto randomize = [](int value) {
		int variation = (rand() % 3) - 1;   // -1, 0, or +1
			return value + variation;
	};

	int newHeight = randomize((height + other.height) / 2);
	int newYield = randomize((yield + other.yield) / 2);
	int newDrought = randomize((droughtResistance + other.droughtResistance) / 2);

	return Crop(newHeight, newYield, newDrought);
}

void Crop::operator=(const Crop& other) {
	height = other.height;
	yield = other.yield;
	droughtResistance = other.droughtResistance;
}