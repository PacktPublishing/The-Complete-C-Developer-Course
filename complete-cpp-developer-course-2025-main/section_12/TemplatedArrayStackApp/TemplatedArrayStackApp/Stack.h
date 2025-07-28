#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack {
	public:
		virtual void push(const T& newEntry) = 0;
		virtual T pop() = 0;
		virtual T peek() const = 0;
		virtual bool isEmpty() const = 0;
		virtual void makeEmpty() = 0;

		virtual ~Stack() {}
};

#endif 