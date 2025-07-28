#include <iostream>
#include "LinkedStack.h"
using namespace std;

void printStack(LinkedStack& stack);

int main() {
	LinkedStack stack;

	stack.push(100);
	stack.push(150);
	stack.push(222);
	stack.push(71);
	stack.push(53);
	stack.push(125);

	printStack(stack);
	cout << "Again to verify it's intact:" << endl;
	printStack(stack);

	//cout << "Top of stack is: " << stack.peek() << endl;

	//while (!stack.isEmpty()) {
	//	cout << stack.pop() << endl;
	//}
	return 0;
}

void printStack(LinkedStack& stack) {
	LinkedStack temp;
	int data;

	while (!stack.isEmpty()) {
		data = stack.pop();
		cout << data << endl;
		temp.push(data);
	}//end while

	while (!temp.isEmpty()) {
		stack.push(temp.pop());
	}

}//end printStack