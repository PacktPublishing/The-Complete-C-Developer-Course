#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include "Stack.h"
#include <iostream>
using namespace std;

template <typename T>
class ArrayStack : public Stack<T> { 
	public:
		ArrayStack(int s = 16) : MAX_SIZE(s) {
			top = -1;
			mArray = new T[MAX_SIZE];
		}//end ctor

		~ArrayStack() override {
			delete[] mArray;
		}

		void push(const T& newEntry) override {
			if (top < MAX_SIZE - 1) {
				top++;
				mArray[top] = newEntry;
			}
			else {
				cout << "Error: Stack is full!  Cannot push." << endl;
			}
		}//end push

		T pop() override {
			if (!isEmpty()) {
				return mArray[top--];
			}
			else {
				cout<<"You can't pop from an empty stack!"<<endl;
				return T();
			}
		}//end pop

		T peek() const override {
			if (!isEmpty()) {
				return mArray[top];
			}
			else {
				cout << "The stack is empty." << endl;
				return T();
			}
		}//end peek

		bool isEmpty() const override {
			return top == -1;
		}//end isEmpty

		void makeEmpty() override {
			top = -1;
		}

	private:
		T* mArray;
		const int MAX_SIZE;
		int top;
};



#endif