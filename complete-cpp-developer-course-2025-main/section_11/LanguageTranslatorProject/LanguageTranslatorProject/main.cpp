#include <iostream>
#include <string>
#include "LanguageTranslator.h"
using namespace std;

void printMenu();
void handleAdd(LanguageTranslator& translator);
void handleLookup(const LanguageTranslator& translator);

int main() {
    LanguageTranslator translator;
    int choice;

    printMenu();
    cin >> choice; 
    cin.ignore();

    while (choice != 0) {
        if (choice == 1) {
            handleAdd(translator);
        }
        else if (choice == 2) {
            handleLookup(translator);
        }
        else if (choice == 3) {
            cout << "All translations:" << endl;
            translator.printAll();
        }
        else {
            cout << "Invalid choice" << endl;
        }

        cout << endl;
        printMenu();
        cin >> choice;
        cin.ignore();
    }

	return 0;
}

void printMenu() {
    cout << "Select an option:" << endl;
    cout << "1 - Add or update a translation" << endl;
    cout << "2 - Look up a translation" << endl;
    cout << "3 - Print all translations" << endl;
    cout << "0 - Exit" << endl;
}

void handleAdd(LanguageTranslator& translator) {
    string englishWord;
    string translatedWord;

    cout << "Enter the English word: ";
    getline(cin, englishWord);

    cout << "Enter the translation: ";
    getline(cin, translatedWord);

    translator.addTranslation(englishWord, translatedWord);
}

void handleLookup(const LanguageTranslator& translator) {
    string word;
    cout << "Enter the English word to translate: ";
    getline(cin, word);
    cout << "Translation: " << translator.getTranslation(word) << endl;
}