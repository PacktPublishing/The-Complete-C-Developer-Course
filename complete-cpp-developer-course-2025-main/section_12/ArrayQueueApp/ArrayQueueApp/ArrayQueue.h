#ifndef ARRAY_QUEUE_H
#define ARRAY_QUEUE_H

#include <iostream>
#include "Queue.h"
using namespace std;

class ArrayQueue : public Queue {
	public:

		ArrayQueue(int s = 16) : MAX_SIZE(s) {
			front = 0;
			back = 0;
			numElements = 0;
			mArray = new int[MAX_SIZE];
		}//end ctor

		virtual ~ArrayQueue() {
			delete[] mArray;
		}//end dtor

		void enqueue(int newEntry) override {
			if (numElements < MAX_SIZE - 1) {
				mArray[back] = newEntry;
				back = (back + 1) % MAX_SIZE;
				numElements++;
			}
			else {
				cout << "You cannot enqueue onto a full queue" << endl;
			}
		}//end enqueue

		int dequeue() override {
			if (!isEmpty()) {
				int data = mArray[front];
				front = (front + 1) % MAX_SIZE;
				numElements--;
				return data;
			}
			else {
				cout << "You cannot dequeueon an empty queue." << endl;
				return 0;
			}
		}//end dequeue

		int peekFront() const override {
			if (!isEmpty()) {
				return mArray[front];
			}
			else {
				cout << "Queue is empty.  You cannot peek the front." << endl;
				return 0;
			}
		}//end peekFront


		bool isEmpty() const override {
			return numElements == 0;
		}//end isEmpty

		void makeEmpty() override {
			front = 0;
			back = 0;
			numElements = 0;
		}//end makeEmpty


	private:
		int* mArray;
		const int MAX_SIZE;
		int front;
		int back;
		int numElements;
};

#endif 
