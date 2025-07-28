#include <iostream>
using namespace std;

double average(double a, double b, double c);

int main() {
	double s1 = 91.2, s2 = 87.8, s3 = 79.6;

	double result = average(s1, s2, s3);

	cout << "The average score is: " << result << endl;

	return 0;
}

double average(double a, double b, double c) {
	return (a + b + c) / 3;
}