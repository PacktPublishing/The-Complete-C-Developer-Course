#include <iostream>
using namespace std;

int main() {

	int count = 0;

	while (count < 10) {
		if (count % 2 != 0) {
			count++;
			continue;
		}

		cout << count << endl;
		count++;
	}

	return 0;
}