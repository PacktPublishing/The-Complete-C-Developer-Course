#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;

int main() {

	srand(time(nullptr));   //seeds the RNG with the current time

	int val1 = rand() % 10;   //0 to 9
	int val2 = rand() % 10 + 1;  //1 to 10

	cout << val1 << endl;
	cout << val2 << endl;

	return 0;
}