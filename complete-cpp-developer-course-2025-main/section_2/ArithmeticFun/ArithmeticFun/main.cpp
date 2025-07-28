#include <iostream>
using namespace std;

int main() {
	// + addition
	// - subtraction
	// * multiplication 
	// / division
	// % modulus (remainder)

	int a = 10;
	int b = 3;

	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;

	// +=  Add and assign
	// -=  Subtract and assign
	// *=  Multiply and assign
	// /=  Divide and assign
	// %=  Modulus and assign


	int result = 10;
	result += 15;   // result = result + 15;
	cout << "Result: " << result << endl;

	cout << "Sum: " << sum << endl;
	cout << "Difference: " << difference << endl;
	cout << "Product: " << product << endl;
	cout << "Quotient: " << quotient << endl;
	cout << "Remainder: " << remainder << endl;


	int myInt = 5;
	myInt++;   //increment operator, same as myInt += 1;  or myInt = myInt + 1;
	cout << myInt << endl;

	myInt--;   //decrement operator, same as myInt -= 1; or myInt = myInt - 1;

	cout << myInt << endl;


	int myNum = 10;
	myNum += 5;
	myNum *= 2;
	myNum *= 2;
	myNum *= 2;

	cout << "Final value: " << myNum << endl;



	return 0;
}