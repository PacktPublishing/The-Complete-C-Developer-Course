#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	ifstream infile("salaries.txt");

	if (!infile) {
		cerr << "Error opening file.  Aborting..." << endl;
		return 1;
	}

	double salary;
	int employeeCount = 0;
	double totalSalary = 0.0;
	int highEarners = 0;

	while (infile >> salary) {
		if (salary < 0 || salary > 1000000) {
			//skip invalid data
			continue;
		}

		employeeCount++;
		totalSalary += salary;

		if (salary > 100000) {
			highEarners++;
		}
	}//end while

	infile.close();

	double averageSalary = (employeeCount > 0) ? totalSalary / employeeCount : 0.0;

	cout << fixed << showpoint << setprecision(2);
	cout << "Employee Salary Report" << endl;
	cout << "-------------------------------" << endl;
	cout << "Total Employees:               " << employeeCount << endl;
	cout << "Total Payroll:                 $" << totalSalary << endl;
	cout << "Average Salary:                $" << averageSalary << endl;
	cout << "Over $100,000 Earners:         " << highEarners << endl;

	return 0;
}