#include <iostream>
#include <stack>
#include <string>
using namespace std;

void storeReverse(const string& origString, stack<char>& reverseStack);
bool isPalindrome(const string& origString);
void printResult(const string& origString);

int main() {

	string strArray[5] = { "racecar", "fudge", "civic", "bob", "dogs" };

	for (const string& str : strArray) {
		printResult(str);
		cout << endl;
	}

	return 0;
}

void storeReverse(const string& origString, stack<char>& reverseStack) {
	for (char c : origString) {
		reverseStack.push(c);
	}
}

bool isPalindrome(const string& origString) {
	stack<char> reverseStack;
	storeReverse(origString, reverseStack);

	for (char c : origString) {
		if (reverseStack.top() != c) {
			return false;
		}
		reverseStack.pop();
	}

	return true;

}

void printResult(const string& origString) {
	cout << "Is \"" << origString << "\" a palindrome? "
		<< boolalpha << isPalindrome(origString) << endl;
}