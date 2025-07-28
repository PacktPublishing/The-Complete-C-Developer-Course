#ifndef LIBRARY_CARD_H
#define LIBRARY_CARD_H

#include <string>
using namespace std;

class LibraryCard {

	public:
		LibraryCard(string cardholderName);
		void checkoutBook();
		void returnBook();
		string getCardholderName() const;
		int getBooksCheckedOut() const;

	private:
		string cardholderName;
		int booksCheckedOut;
};

#endif