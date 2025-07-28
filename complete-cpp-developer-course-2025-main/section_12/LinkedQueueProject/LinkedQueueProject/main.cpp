#include <iostream>
#include "LinkedQueue.h"
using namespace std;

int main() {
	LinkedQueue queue;

	cout << "Enqueuing values..." << endl;
	for (int i = 1; i <= 10; i++) {
		cout << "Enqueueing " << (i * 100) << endl;
		queue.enqueue(i * 100);
	}//end for

	queue.enqueue(1234);

	cout << "Dequeuing values..." << endl;
	while (!queue.isEmpty()) {
		cout << queue.dequeue() << endl;
	}

	queue.dequeue();

	return 0;
}