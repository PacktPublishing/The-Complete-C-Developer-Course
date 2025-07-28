#include <iostream>
using namespace std;

int countEvens(int arr[], int size);

int main() {

	int myArray[] = { 12, 7, 4, 19, 22, 3, 8, 10 };

	int numEvens = countEvens(myArray, 8);

	cout << "Number of even elements: " << numEvens << endl;

	return 0;
}

int countEvens(int arr[], int size) {
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			count++;
		}
	}

	return count;
}