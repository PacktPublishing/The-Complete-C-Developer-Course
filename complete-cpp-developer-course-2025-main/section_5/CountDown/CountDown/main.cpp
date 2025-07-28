#include <iostream>
using namespace std;

void countDownFrom(int num);
int sumValues(int num);

int main() {

	//countDownFrom(10);

	//for (int i = 10; i >= 0; i--) {
	//	cout << i << endl;
	//}

	int totalSum = sumValues(10);
	cout << "The sum is " << totalSum << endl;

	return 0;
}

void countDownFrom(int num) {
	if (num >= 0) {
		cout << num << endl;
		countDownFrom(num - 1);
	}
}//end countDownFrom

int sumValues(int num) {
	if (num > 1) {
		return num + sumValues(num - 1);
	}
	return num;   //base case
}