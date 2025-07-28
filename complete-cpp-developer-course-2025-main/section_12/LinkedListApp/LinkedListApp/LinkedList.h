#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include "List.h"
using namespace std;

// ---------------- Node -------------------- //
class Node {
	public:
		Node(int data, Node* next) {
			this->data = data;
			this->next = next;
		}//end ctor

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

// --------------- Linked List ---------------------//
class LinkedList : public List {
	public:
		LinkedList() {
			mHead = nullptr;
			mNumElements = 0;
		}//end ctor

		virtual ~LinkedList() {
			makeEmpty();  //clean up the nodes
		}//end dtor

		void add(int newEntry) override {
			Node* newNode = new Node(newEntry, nullptr);

			if (mHead == nullptr) {
				mHead = newNode;
			}
			else {
				Node* walker = mHead;                        
				while (walker->getNext() != nullptr) {
					walker = walker->getNext();
				}//end while

				walker->setNext(newNode);
			}
			mNumElements++;
		}//end add


		void add(int newEntry, int position) override {
			if (position < 0 || position > mNumElements) {
				cout << "Error: Cannot add at specified position." << endl;
				return;
			}

			Node* newNode = new Node(newEntry, nullptr);

			if (position == 0) {
				newNode->setNext(mHead);
				mHead = newNode;
			}
			else {
				Node* nodeBefore = mHead;

				for (int i = 0; i < position - 1; i++) {
					nodeBefore = nodeBefore->getNext();
				}//end for 
				                                                         
				newNode->setNext(nodeBefore->getNext());     
				nodeBefore->setNext(newNode);
			}

			mNumElements++;
		}//end add

		void set(int newEntry, int position) override {
			if (position < 0 || position > mNumElements) {
				cout << "Error:  Invalid position." << endl;
				return;
			}

			Node* walker = mHead;

			for (int i = 0; i < position; i++) {
				walker = walker->getNext();
			}//end for 

			walker->setData(newEntry);
		}//end set

		bool contains(int entry) const override {
			return find(entry) != -1;
		}//end contains

		int find(int entry) const override {
			Node* walker = mHead;
			int index = 0;

			while (walker != nullptr) {
				if (walker->getData() == entry) {
					return index;
				}
				walker = walker->getNext();
				index++;
			}//end while

			return -1;

		}//end find

		int remove(int position) override {
			if (position < 0 || position >= mNumElements) {
				cout << "Error:  Cannot remove at specified position." << endl;
				return 0;
			}

			int dataToReturn = 0;

			if (position == 0) {
				Node* temp = mHead;
				dataToReturn = temp->getData();
				mHead = mHead->getNext();
				delete temp;
			}
			else {
				Node* nodeBefore = mHead;
				for (int i = 0; i < position - 1; i++) {
					nodeBefore = nodeBefore->getNext();
				}//end for

				Node* nodeToRemove = nodeBefore->getNext();
				Node* nodeAfter = nodeToRemove->getNext();
				dataToReturn = nodeToRemove->getData();

				nodeBefore->setNext(nodeAfter);
				delete nodeToRemove;
			}

			mNumElements--;
			return dataToReturn;
		}//end remove 

		void makeEmpty() override {
			Node* temp;
			while (mHead != nullptr) {
				temp = mHead;
				mHead = mHead->getNext();
				delete temp;
			}
		}//end makeEmpty

		int size() const override {
			return mNumElements;
		}//end size

		bool isEmpty() const override {
			return mNumElements == 0;
		}//end isEmpty

		void printList() const override {
			Node* walker = mHead;
			while (walker != nullptr) {
				cout << walker->getData() << endl;
				walker = walker->getNext();
			}//end while
		}

	private:
		Node* mHead;
		int mNumElements;
};



#endif 