#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double billAmount;
	double tipPercentage;
	double tipAmount;
	double totalAmount;

	cout << fixed << setprecision(2);

	cout << "Enter the total bill amount: " << endl;
	cin >> billAmount;

	cout << "Enter the tip percentage you would like to leave: " << endl;
	cin >> tipPercentage;

	tipAmount = billAmount * (tipPercentage / 100);
	totalAmount = billAmount + tipAmount;

	cout << "You should tip $" << tipAmount << endl;
	cout << "Your total with tip is: $" << totalAmount << endl;

	return 0;
}