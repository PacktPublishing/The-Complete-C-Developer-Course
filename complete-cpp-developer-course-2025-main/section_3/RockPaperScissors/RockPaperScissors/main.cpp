#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	char userMove;
	char computerMove;

	srand(time(nullptr));

	cout << "Welcome to Rock, Paper, Scissors!" << endl;
	cout << "Enter your move (R, P, or S): ";
	cin >> userMove;

	int randNum = rand() % 3;

	if (randNum == 0) {
		computerMove = 'R';
	}
	else if (randNum == 1) {
		computerMove = 'P';
	}
	else {
		computerMove = 'S';
	}

	cout << "You played: " << userMove << endl;
	cout << "Computer played: " << computerMove << endl;

	if (userMove == computerMove) {
		cout << "It's a tie!" << endl;
	}
	else if (
			(userMove == 'R' && computerMove == 'S') ||
			(userMove == 'S' && computerMove == 'P') ||
			(userMove == 'P' && computerMove == 'R')
		) {
		cout << "You win!" << endl;
	}
	else {
		cout << "Computer wins" << endl;
	}


	return 0;
}