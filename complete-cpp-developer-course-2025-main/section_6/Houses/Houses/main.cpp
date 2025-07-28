#include <iostream>
#include <string>
#include "House.h"
using namespace std;


int main() {
	//House myHouse;
	House theirHouse(2, 10, "green");

	theirHouse.print();

	//cout << "Before calling any setters..." << endl;
	//myHouse.print();

	////now call settings
	//myHouse.setNumStories(2);
	//myHouse.setNumWindows(6);
	//myHouse.setColor("red");

	//cout << "\nAfter calling setters..." << endl;
	//myHouse.print();

	//House yourHouse;
	//House myHouse;

	/*myHouse.setNumStories(2);
	myHouse.setNumWindows(6);
	myHouse.setColor("red");

	yourHouse.setNumStories(3);
	yourHouse.setNumWindows(10);
	yourHouse.setColor("blue");

	myHouse.print();
	yourHouse.print();*/



	return 0;
}
