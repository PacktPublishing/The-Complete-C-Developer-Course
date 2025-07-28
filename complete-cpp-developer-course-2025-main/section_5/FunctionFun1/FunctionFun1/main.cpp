#include <iostream>

using namespace std;

void printSomething();
void printMyName();

int main() {

	printSomething(); //call or invocation
	printMyName();
	return 0;
}

void printSomething() {
	cout << "Hey!  Look, I'm here!" << endl;
}

void printMyName() {
	cout << "My name is John Baugh!" << endl;
}