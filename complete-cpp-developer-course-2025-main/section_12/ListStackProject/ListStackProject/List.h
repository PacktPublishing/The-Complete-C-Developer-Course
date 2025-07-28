#ifndef LIST_H
#define LIST_H

class List {
public:
	virtual void add(int newEntry) = 0;
	virtual void add(int newEntry, int position) = 0;
	virtual void set(int newEntry, int position) = 0;

	virtual bool contains(int entry) const = 0;
	virtual int find(int entry) const = 0;
	virtual int remove(int position) = 0;
	virtual void makeEmpty() = 0;

	virtual int size() const = 0;
	virtual bool isEmpty() const = 0;
	virtual void printList() const = 0;

};

#endif
