#include <iostream>
#include <array>
using namespace std;

int main() {
	const int NUM_DAYS = 7;
	array<double, NUM_DAYS> fahrenheitTemps;

	for (int i = 0; i < NUM_DAYS; i++) {
		cout << "Enter the temperature in Fahrenheit for day "
			<< (i + 1) << ": ";
		cin >> fahrenheitTemps[i];
	}

	cout << "\nHere are the temperatures converted to Celsius:"<<endl;

	for (double tempF : fahrenheitTemps) {
		double tempC = (tempF - 32) * 5.0 / 9;
		cout << "F: " << tempF << " ->  C:" << tempC << endl;
	}

	return 0;
}