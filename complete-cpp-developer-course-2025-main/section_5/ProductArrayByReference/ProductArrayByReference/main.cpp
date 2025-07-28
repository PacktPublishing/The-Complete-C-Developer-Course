#include <iostream>
#include <array>
using namespace std;

int productArray(array<int, 6> myArray);
void productArray(array<int, 6> myArray, int& result);

int main() {
	array<int, 6> numbers{ 1, 2, 3, 4, 5, 6 };

	int finalProduct;
	productArray(numbers, finalProduct);

	cout << "The product of the array elements (by reference) is: " << finalProduct << endl;

	/*int result = productArray(numbers);

	cout << "The product of the array elements is: " << result << endl;*/

	return 0;
}

int productArray(array<int, 6> myArray) {
	int product = 1;

	for (int num : myArray) {
		product *= num;
	}

	return product;
}

void productArray(array<int, 6> myArray, int& result) {
	result = 1;

	for (int num : myArray) {
		result *= num;
	}
}