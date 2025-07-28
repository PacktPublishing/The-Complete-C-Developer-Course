#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<string> names(5);

	names.at(0) = "John";
	names.at(1) = "Bob";
	names.at(2) = "Sally";
	names.at(3) = "Karen";
	names.at(4) = "Smitty";

	for (string name : names) {
		cout << name << endl;
	}

	try {
		names.at(5) = "Tyler";
	}
	catch (const out_of_range& ex) {
		cout << "Caught an out_of_range exception: "
			<< ex.what() << endl;
	}

	//catch(const exception& ex)   <-- would catch ANY exception

	return 0;
}