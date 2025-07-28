#include <iostream>
#include "RulesDemo.h"

int main() {

	cout << "\n--- Rule of Three ---" << endl;
	RuleOfThree a("Alpha");
	RuleOfThree b = a;
	b = a;

	cout << "\n--- Rule of Five ---" << endl;
	RuleOfFive c("Beta");
	RuleOfFive d = move(c);
	RuleOfFive e;
	e = move(d);

	cout << "\n--- Rule of Zero ---" << endl;
	RuleOfZero f("Gamma");
	f.print();

	return 0;
}