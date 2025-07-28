#ifndef LANGUAGE_TRANSLATOR_H
#define LANGUAGE_TRANSLATOR_H

#include <string>
#include <map>
using namespace std;

class LanguageTranslator {
	public:
		void addTranslation(const string& englishWord, const string& translatedWord);
		string getTranslation(const string& englishWord) const;
		void printAll() const;
	private:
		map<string, string> translations;
};

#endif 