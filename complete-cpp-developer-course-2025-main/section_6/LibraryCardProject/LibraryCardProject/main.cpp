#include <iostream>
#include "LibraryCard.h"
using namespace std;

void printLibraryCardDetails(const LibraryCard& card);

int main() {
	LibraryCard aliceCard("Alice Johnson");
	LibraryCard bobCard("Bob Smith");

	aliceCard.checkoutBook();
	aliceCard.checkoutBook();
	bobCard.checkoutBook();

	printLibraryCardDetails(aliceCard);
	printLibraryCardDetails(bobCard);

	cout << "Alice returns a book... " << endl;
	aliceCard.returnBook();
	printLibraryCardDetails(aliceCard);

	bobCard.returnBook();
	bobCard.returnBook();  //should trigger a warning!

	return 0;
}

void printLibraryCardDetails(const LibraryCard& card) {
	cout << card.getCardholderName() << " has "
		 << card.getBooksCheckedOut() << " books checked out." 
		 << endl;
}
