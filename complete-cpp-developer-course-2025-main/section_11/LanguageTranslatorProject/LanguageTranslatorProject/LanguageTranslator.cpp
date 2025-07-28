#include "LanguageTranslator.h"
#include <iostream>
using namespace std;

void LanguageTranslator::addTranslation(const string& englishWord, const string& translatedWord) {
	translations[englishWord] = translatedWord;
}

string LanguageTranslator::getTranslation(const string& englishWord) const {
	auto it = translations.find(englishWord);
	if (it != translations.end()) {
		return it->second;
	}
	else {
		return "NOT FOUND";
	}
}

void LanguageTranslator::printAll() const {
	for (const auto& pair : translations) {
		cout << pair.first << " -> " << pair.second << endl;
	}
}