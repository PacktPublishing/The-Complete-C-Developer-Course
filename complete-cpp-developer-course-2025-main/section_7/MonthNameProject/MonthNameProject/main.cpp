#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

string getMonthName(int monthNum);

int main() {

	try {
		cout << "Month 5: " << getMonthName(5) << endl;
		cout << "Month 12: " << getMonthName(12) << endl;
		cout << "Month 0: " << getMonthName(0) << endl;
	}
	catch (const out_of_range& err) {
		cout << "Caught an exception: " << err.what() << endl;
	}

	return 0;
}

string getMonthName(int monthNum) {
	string months[] = { "January", "February", "March", "April", "May", "June",
	"July", "August", "September", "October", "November", "December" };

	if (monthNum < 1 || monthNum > 12) {
		throw out_of_range("Month must be between 1 and 12.");
	}

	return months[monthNum - 1];
}