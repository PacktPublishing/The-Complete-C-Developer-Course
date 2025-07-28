#ifndef LIST_STACK_H
#define LIST_STACK_H

#include <iostream>
#include "Stack.h"
#include "LinkedList.h"
using namespace std;

class ListStack : public Stack {
	public:
		ListStack() {} 
		//end ctor

		virtual ~ListStack() {
			makeEmpty();
		}//end dtor

		void push(int newEntry) override {
			linkedListStack.add(newEntry, 0);
		}//end push

		int pop() override {
			if (isEmpty()) {
				cout << "Error: Cannot pop from an empty stack!" << endl;
				return 0;
			}

			return linkedListStack.remove(0);
		}//end pop

		int peek() override {
			if (isEmpty()) {
				cout << "Error: Cannot peek an empty stack!" << endl;
				return 0;
			}
			
			int data = linkedListStack.remove(0);
			linkedListStack.add(data, 0);

			return data;
		}//end peek

		bool isEmpty() const override {
			return linkedListStack.isEmpty();
		}  //end isEmpty

		void makeEmpty() override {
			linkedListStack.makeEmpty();
		}

	private:
		LinkedList linkedListStack;
};


#endif 
