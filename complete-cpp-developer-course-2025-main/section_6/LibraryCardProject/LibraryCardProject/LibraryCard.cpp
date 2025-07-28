#include "LibraryCard.h"
#include <iostream>
using namespace std;

LibraryCard::LibraryCard(string cardholderName) {
	this->cardholderName = cardholderName;
	booksCheckedOut = 0;
}

void LibraryCard::checkoutBook() {
	booksCheckedOut++;
}

void LibraryCard::returnBook() {
	if (booksCheckedOut > 0) {
		booksCheckedOut--;
	}
	else {
		cout << "No books to return!" << endl;
	}
}

string LibraryCard::getCardholderName() const {
	return cardholderName;
}

int LibraryCard::getBooksCheckedOut() const {
	return booksCheckedOut;
}