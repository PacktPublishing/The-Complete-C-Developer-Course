#include <iostream>
#include "Dog.h"
using namespace std;

int main() {

	Dog* myDogPtr = new Dog("Rover", "German Shepherd");
	Dog* yourDogPtr = new Dog("Fido", "Beagle");

	cout << "Using arrow operator: " << endl;
	cout << myDogPtr->getName() << " - "
		<< myDogPtr->getBreed() << endl;
	cout << yourDogPtr->getName() << " - "
		<< yourDogPtr->getBreed() << endl;

	cout << "\nUsing dereference and dot operator" << endl;
	cout << (*myDogPtr).getName() << " - "
		<< (*myDogPtr).getBreed() << endl;
	cout << (*yourDogPtr).getName() << " - "
		<< (*yourDogPtr).getBreed() << endl;

	delete myDogPtr;
	delete yourDogPtr;

	return 0;
}