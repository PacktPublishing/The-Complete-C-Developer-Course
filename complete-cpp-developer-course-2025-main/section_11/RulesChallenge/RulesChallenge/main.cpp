#include "Buffer.h"
#include <iostream>
using namespace std;

int main() {

	cout << "\nCreating Buffer a...." << endl;
	Buffer a("Hello");

	cout << "\nCopying a to b ..." << endl;
	Buffer b = a;

	cout << "\nMoving a to c..." << endl;
	Buffer c = move(a);

	cout << "\nAssigning b to d..." << endl;
	Buffer d("Temp");
	d = b;

	cout << "\nMoving c to e..." << endl;
	Buffer e("Temp");
	e = move(c);

	cout << "\nPrinting all buffers..." << endl;

	b.print();
	d.print();
	e.print();

	cout << "\nEnd of main" << endl;

	return 0;
}