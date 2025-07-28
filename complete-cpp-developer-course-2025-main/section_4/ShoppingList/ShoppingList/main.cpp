#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> shoppingList;
	string item;

	cout << "Enter items for your shopping list (type 'done' to finish):";
	getline(cin, item);

	while (item != "done") {
		shoppingList.push_back(item);

		cout << "Enter another item (or 'done' to finish): ";
		getline(cin, item);
	}

	cout << "\nYour shopping list: " << endl;
	for (string listItem : shoppingList) {
		cout << "- " << listItem << endl;
	}

	return 0;
}