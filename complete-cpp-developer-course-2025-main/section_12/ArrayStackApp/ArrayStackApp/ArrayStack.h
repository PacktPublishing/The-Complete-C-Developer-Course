#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include "Stack.h"
#include <iostream>
using namespace std;

class ArrayStack : public Stack {
	public:
		ArrayStack(int s = 16) : MAX_SIZE(s) {
			top = -1;
			mArray = new int[MAX_SIZE];
		}//end ctor

		void push(int newEntry) override {
			if (top < MAX_SIZE - 1) {
				top++;
				mArray[top] = newEntry;
			}
			else {
				cout << "Error: Stack is full!  Cannot push." << endl;
			}
		}//end push

		int pop() override {
			if (!isEmpty()) {
				return mArray[top--];
			}
			else {
				cout<<"You can't pop from an empty stack!"<<endl;
				return 0;
			}
		}//end pop

		int peek() const override {
			if (!isEmpty()) {
				return mArray[top];
			}
			else {
				cout << "The stack is empty." << endl;
				return 0;
			}
		}//end peek

		bool isEmpty() const override {
			return top == -1;
		}//end isEmpty

		void makeEmpty() override {
			top = -1;
		}

	private:
		int* mArray;
		const int MAX_SIZE;
		int top;
};



#endif