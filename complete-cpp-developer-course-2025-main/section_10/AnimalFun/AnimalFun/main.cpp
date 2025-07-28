#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
using namespace std;

int main() {
	Dog dog("Rover", 80, "Greyhound");

	//Here is the key line:
	Animal* dogPtr = new Dog("Fido", 115, "Golden Retriever");
	Animal* catPtr = new Cat("Felix", 12);

	cout << "Dog says: " << dogPtr->makeNoise() << endl;
	cout << "Dog eats: " << dogPtr->eat() << endl;

	cout << "Cat says: " << catPtr->makeNoise() << endl;
	cout << "Cat eats: " << catPtr->eat() << endl;


	// (Cat*)catPtr or reinterpret_cat<Cat*>(catPtr)
	Cat* realCat = dynamic_cast<Cat*>(catPtr);
	if (realCat) {
		realCat->chaseMouse();
	}

	delete dogPtr;
	dogPtr = nullptr;

	delete catPtr;
	catPtr = nullptr;

	return 0;
}