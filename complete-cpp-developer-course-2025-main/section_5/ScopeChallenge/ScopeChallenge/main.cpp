#include <iostream>
using namespace std;

int counter = 0;

void modifyGlobal();

int main() {
	cout << "Counter before: " << counter << endl;
	for (int i = 0; i < 100; i++) {
		modifyGlobal();
	}
	cout << "Counter after: " << counter << endl;

	return 0;
}

void modifyGlobal() {
	counter++;
}