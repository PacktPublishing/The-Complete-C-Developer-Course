#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
	cout << "=== std::map ===" << endl;

	map<string, int> orderedMap;
	orderedMap["banana"] = 3;
	orderedMap["apple"] = 5;
	orderedMap["cherry"] = 2;

	cout << "Contents of ordered map (keys will be sorted):" << endl;
	for (const auto& pair : orderedMap) {
		cout << pair.first<<": " << pair.second << endl;
	}

	cout << "\nLooking up 'apple' in orderedMap: ";
	auto it1 = orderedMap.find("apple");
	if (it1 != orderedMap.end()) {
		cout << "Found, value = " << it1->second << endl;
	}
	else {
		cout << "Not found!" << endl;
	}

	cout << endl << endl;
	cout << "=== std::unordered_map ===" << endl;

	unordered_map<string, int> unorderedMap;
	unorderedMap["banana"] = 3;
	unorderedMap["apple"] = 5;
	unorderedMap["cherry"] = 2;

	cout << "Contents of unordered map (no guaranteed order):" << endl;
	for (const auto& pair : unorderedMap) {
		cout << pair.first << ": " << pair.second << endl;
	}

	cout << "\nLooking up 'apple' in unorderedMap: ";
	auto it2 = unorderedMap.find("apple");

	if (it2 != unorderedMap.end()) {
		cout << "Found, value = " << it2->second << endl;
	}
	else {
		cout << "Not found." << endl;
	}

	return 0;
}