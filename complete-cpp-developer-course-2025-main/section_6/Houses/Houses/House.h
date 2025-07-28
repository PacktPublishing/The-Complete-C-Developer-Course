#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;

class House {
	public:
		House();
		House(int numStories, int numWindows, string color);
		virtual ~House();
		void setNumStories(int numStories);
		void setNumWindows(int numWindows);
		void setColor(string color);
		int getNumStories() const;
		int getNumWindows() const;
		string getColor() const;
		void print() const;

	private:
		int numStories;
		int numWindows;
		string color;
};


#endif