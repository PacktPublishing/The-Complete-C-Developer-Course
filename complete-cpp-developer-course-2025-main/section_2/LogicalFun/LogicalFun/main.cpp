#include <iostream>
using namespace std;

int main() {

	bool isRaining = false;
	bool isWarm = false;

	cout << boolalpha;

	cout << "isRaining AND isWarm: " << (isRaining && isWarm) << endl;
	cout << "isRaining OR isWarm: " << (isRaining || isWarm) << endl;
	cout << "NOT isRaining: " << (!isRaining) << endl;



	return 0;
}