#include <iostream>
#include "Rectangle.h"
#include "RectangleHelper.h"

using namespace std;

void changeData(Rectangle& rect);
void printData(Rectangle& rect);

int main() {
	Rectangle r1(10, 25);
	RectangleHelper helper;

	cout << "r1 area: " << r1.area() << endl;

	changeData(r1);

	cout << "Now, r1 area: " << r1.area() << endl;

	helper.modifyRectangle(r1);
	cout << "after helper modifies, area: " << r1.area() << endl;

	cout << "printing data directly with printData:" << endl;
	printData(r1);

	return 0;
}

void changeData(Rectangle& rect) {
	rect.length = 100;
	rect.width = 100;
}

void printData(Rectangle& rect) {
	cout << "length: " << rect.length
		<< ", width: " << rect.width << endl;
}