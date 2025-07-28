#include <iostream>
#include "IceCreamSundae.h"
using namespace std;

int main() {

	IceCreamSundae basicVanilla("Vanilla");
	basicVanilla.printSundae();

	IceCreamSundae deluxeChocolate("Chocolate");
	deluxeChocolate.addTopping("Whipped Cream");
	deluxeChocolate.addTopping("Sprinkles");
	deluxeChocolate.addTopping("Cherries");

	cout << endl;
	deluxeChocolate.printSundae();

	return 0;
}

