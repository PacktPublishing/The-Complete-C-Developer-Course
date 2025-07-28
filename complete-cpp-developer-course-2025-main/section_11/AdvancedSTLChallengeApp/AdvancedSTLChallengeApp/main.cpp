#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

void printVector(const vector<string>& vec);

int main() {

	vector <string> words;

	words.push_back("hi");
	words.emplace_back("hello");
	words.push_back("cat");
	words.emplace_back("world");
	words.push_back("test");

	cout << "Original vector:" << endl;
	printVector(words);

	for (auto it = words.begin(); it != words.end();) {
		if (it->length() <= 3) {
			it = words.erase(it);
		}
		else {
			++it;
		}
	}//end for

	cout << "\nAfter removing short strings (length <= 3):" << endl;
	printVector(words);

	words.erase(remove(words.begin(), words.end(), "test"), words.end());

	cout << "\nAfter removing 'test' using remove-erase idiom:" << endl;
	printVector(words);

	map<string, int> wordLengthsOrdered;
	unordered_map<string, int> wordLengthsUnordered;

	for (const auto& word : words) {
		wordLengthsOrdered[word] = word.length();
		wordLengthsUnordered[word] = word.length();
	}

	cout << "\nContents of map (ordered):" << endl;
	
	for (const auto& pair : wordLengthsOrdered) {
		cout << pair.first << " -> " << pair.second << endl;
	}

	//lookup
	string query = "world";
	cout << "\nLooking up '" << query << "' in both maps:" << endl;

	if (wordLengthsOrdered.find(query) != wordLengthsOrdered.end()) {
		cout << "map: found -> " << wordLengthsOrdered[query] << endl;
	}
	else {
		cout << "map: not found" << endl;
	}

	//unordered map lookup
	if(wordLengthsUnordered.find(query) != wordLengthsUnordered.end()) {
		cout << "unordered map: found -> " << wordLengthsUnordered[query] << endl;
	}
	else {
		cout << "unordered map: not found" << endl;
	}


	return 0;
}

void printVector(const vector<string>& vec) {
	for (const auto& item : vec) {
		cout << item << " ";
	}
	cout << endl;
}