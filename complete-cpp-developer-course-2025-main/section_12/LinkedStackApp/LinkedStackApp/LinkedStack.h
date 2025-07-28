#include "Stack.h"
#include <iostream>
using namespace std;

//------------------- Node ------------------------//
class Node {
	public:
		Node(int data, Node* next) : data(data), next(next) {}

		int getData() const {
			return data;
		}

		void setData(int data) {
			this->data = data;
		}

		Node* getNext() const {
			return next;
		}

		void setNext(Node* next) {
			this->next = next;
		}

	private:
		int data;
		Node* next;
};

//------------------ LinkedStack ------------------------//
class LinkedStack : public Stack {
	public:
		LinkedStack() : top(nullptr) {}
		//end ctor

		virtual ~LinkedStack() {
			makeEmpty();
		}//end dtor

		void push(int newEntry) override {
			Node* newNode = new Node(newEntry, top);
			top = newNode;
		}//end push

		int pop() override {
			if (isEmpty()) {
				cout << "You cannot pop on an empty stack!" << endl;
				return 0;
			}

			Node* temp = top;
			int data = temp->getData();
			top = top->getNext();
			delete temp;
			temp = nullptr;
			return data;
		}//end pop

		int peek() const override {
			if (isEmpty()) {
				cout << "You cannot peek on an empty stack!" << endl;
				return 0;
			}

			return top->getData();
		}//end peek

		bool isEmpty() const override {
			return top == nullptr;
		}//end isEmpty

		void makeEmpty() override {
			while (top != nullptr) {
				Node* temp = top;
				top = top->getNext();
				delete temp;
			}
		}//end makeEmpty

	private:
		Node* top;
};
