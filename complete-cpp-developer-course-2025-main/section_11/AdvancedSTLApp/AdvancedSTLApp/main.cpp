#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person {
	public:
		string name;
		int age;

		Person(string name, int age) : name(name), age(age) {
			cout << "Constructed: " << name << endl;
		}

		Person(const Person& other) {
			name = other.name;
			age = other.age;
			cout << "Copied: " << name << endl;
		}
};


int main() {
	vector<Person> people;

	cout << "\nUsing push back:" << endl;
	Person p1("Alice", 30);
	people.push_back(p1);

	cout << "\nUsing emplace back:" << endl;
	people.emplace_back("Bob", 40);


	return 0;
}