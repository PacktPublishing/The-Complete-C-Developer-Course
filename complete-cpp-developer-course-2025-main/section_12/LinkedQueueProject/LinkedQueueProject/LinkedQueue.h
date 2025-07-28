#ifndef LINKED_QUEUE_H
#define LINKED_QUEUE_H

#include "Queue.h"
#include <iostream>
using namespace std;

// Doubly linked Node
class Node {
public:
    Node(int data, Node* next = nullptr, Node* prev = nullptr)
        : data(data), next(next), previous(prev) {
    }

    int getData() const { return data; }
    void setData(int val) { data = val; }

    Node* getNext() const { return next; }
    void setNext(Node* n) { next = n; }

    Node* getPrevious() const { return previous; }
    void setPrevious(Node* p) { previous = p; }

private:
    int data;
    Node* next;
    Node* previous;
};

class LinkedQueue : public Queue {


    public:
        LinkedQueue() : front(nullptr), back(nullptr) {}
        //end ctor

        virtual ~LinkedQueue() {
            makeEmpty();
        }//end dtor

        void enqueue(int newEntry) override {
            Node* newNode = new Node(newEntry);
            
            if (isEmpty()) {
                front = back = newNode;
            }
            else {
                back->setNext(newNode);
                newNode->setPrevious(back);
                back = newNode;
            }
        }//end enqueue

        int dequeue() override {
            if (isEmpty()) {
                cout << "You cannot dequeue from an empty queue." << endl;
                return 0;
            }

            Node* temp = front;
            int data = temp->getData();
            front = front->getNext();

            if (front == nullptr) {
                back = nullptr;  //queue is now empty
            }
            else {
                front->setPrevious(nullptr);
            }

            delete temp;
            return data;
        }//end dequeue

        int peekFront() const override {
            if (!isEmpty()) {
                return front->getData();
            }
            else {
                cout << "You cannot peek the front of an empty queue!" << endl;
                return 0;
            }
        }//end peekFront

        bool isEmpty() const override {
            return front == nullptr;
        }//end isEmpty

        void makeEmpty() override {
            while (!isEmpty()) {
                dequeue();
            }
        }//end makeEmpty

    private:
        Node* front;
        Node* back;

};


#endif 