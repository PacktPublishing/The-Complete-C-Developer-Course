#include <iostream>
#include <string>

using namespace std;

//double getBigger(double a, double b);
//int getBigger(int a, int b);
//string getBigger(string a, string b);

template <class T>
T getBigger(T a, T b) {
	return (a > b) ? a : b;
}

template <class T>
T getSmaller(T a, T b) {
	return (a < b) ? a : b;
}

int main() {

	double d1 = 3.14;
	double d2 = 5.55;
	int i1 = 11;
	int i2 = 9;
	string s1 = "Alice";
	string s2 = "John";


	double biggerDub = getBigger(d1, d2);
	int biggerInt = getBigger(i1, i2);
	string biggerStr = getBigger(s1, s2);

	double smallerDub = getSmaller(d1, d2);
	int smallerInt = getSmaller(i1, i2);
	string smallerString = getSmaller(s1, s2);


	cout << "Bigger items:" << endl;
	cout << "\t" << biggerDub << "\n\t" << biggerInt << "\n\t" << biggerStr << endl;

	cout << "Smaller items:" << endl;
	cout << "\t" << smallerDub << endl;
	cout << "\t" << smallerInt << endl;
	cout << "\t" << smallerString << endl;

	return 0;
}

//double getBigger(double a, double b) {
//	return (a > b) ? a : b;
//}
//
//int getBigger(int a, int b) {
//	return (a > b) ? a : b;
//}
//
//string getBigger(string a, string b) {
//	return (a > b) ? a : b;
//}