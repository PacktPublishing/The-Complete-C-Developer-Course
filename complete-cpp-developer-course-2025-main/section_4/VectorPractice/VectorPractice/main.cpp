#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<string> names;

	names.push_back("Alice");
	names.push_back("Bob");
	names.push_back("Charlie");
	names.push_back("Diana");
	names.push_back("Eddie");

	names.insert(names.begin() + 2, "John Baugh");
	names.pop_back();  

	for (const string& name : names) {
		cout << name << endl;
	}

	return 0;
}