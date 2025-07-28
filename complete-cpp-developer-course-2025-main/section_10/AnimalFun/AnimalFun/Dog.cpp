#include "Dog.h"
#include <iostream>
#include <string>
using namespace std;

Dog::Dog(string name, double weight, string breed) : Animal(name, weight)  {
	this->breed = breed;
}

string Dog::getBreed() const {
	return breed;
}

void Dog::digHole() const {
	cout << "I'm digging a hole!" << endl;
}

string Dog::makeNoise() const {
	return "Woof!";
}

void Dog::chaseCat() const {
	cout << "Here, kitty kitty!" << endl;
}

string Dog::eat() const {
	return "I love dog food!";
}