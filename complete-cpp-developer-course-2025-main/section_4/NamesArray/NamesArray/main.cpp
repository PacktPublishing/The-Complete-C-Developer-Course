#include <iostream>
#include <string>
using namespace std;

int main() {
	string names[4] = { "Bob", "Sally", "John", "Ed" };

	//for (int i = 0; i < 4; i++) {
	//	cout << names[i] << endl;
	//}

	//for (string name : names) {
	//	cout << name << endl;
	//}

	for (auto name : names) {
		cout << name << endl;
	}
	return 0;
}