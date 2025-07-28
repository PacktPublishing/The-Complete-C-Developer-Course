#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
	LinkedList myList;
	int data;

	myList.add(15);
	myList.add(22);
	myList.add(100);
	myList.add(44);
	myList.add(500);
	myList.add(444);
	myList.add(505);
	myList.add(22);

	myList.set(1515, 0);
	myList.set(2222, 7);

	myList.printList();

	myList.add(1500, 89);

	cout << endl;
	myList.printList();

	cout << endl;

	int lastIndex = myList.size() - 1;
	int removed = myList.remove(lastIndex);

	cout << "Just removed " << removed << " from the END of the list." << endl;


	while (!myList.isEmpty()) {
		data = myList.remove(0);
		cout << "Just removed: " << data << endl;
	}//end while

	cout << endl << "Final contents (should be empty):" << endl;
	myList.printList();

	return 0;
}