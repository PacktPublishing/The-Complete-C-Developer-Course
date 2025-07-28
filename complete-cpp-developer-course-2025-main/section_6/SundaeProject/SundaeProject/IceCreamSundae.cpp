#include "IceCreamSundae.h"
#include <iostream>
using namespace std;

IceCreamSundae::IceCreamSundae(string flavor) {
	this->flavor = flavor;
}

void IceCreamSundae::addTopping(string topping) {
	toppings.push_back(topping);
}

string IceCreamSundae::getFlavor() const {
	return flavor;
}

vector<string> IceCreamSundae::getToppings() const {
	return toppings;
}

void IceCreamSundae::printSundae() const {
	cout << "Sundae flavor: " << flavor << endl;
	cout << "Toppings: " << endl;
	if (toppings.empty()) {
		cout << "None";
	}
	else {
		for (string topping : toppings) {
			cout << topping << ", ";
		}
	}

	cout << endl;
}