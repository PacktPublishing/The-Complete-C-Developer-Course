#include "Rectangle.h"

Rectangle::Rectangle() {
	this->length = 1.0;
	this->width = 1.0;
}// no-arg ctor 

Rectangle::Rectangle(double length, double width) {
	this->length = length;
	this->width = width;
}// end parameterized ctor

double Rectangle::getLength() const {
	return length;
}

double Rectangle::getWidth() const {
	return width;
}

void Rectangle::setLength(double length) {
	this->length = length;
}

void Rectangle::setWidth(double width) {
	this->width = width;
}

double Rectangle::area() const {
	return length * width;
}

double Rectangle::perimeter() const {
	return 2 * length + 2 * width;
	//return 2 * (length + width);
}

