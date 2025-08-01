#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

enum class Race { HUMAN, ELF, DWARF, ORC, TROLL };


class Player {
public:
	Player(string name, Race race, int hitPoints, int magicPoints);
	virtual ~Player() = default;

	string getName() const;
	Race getRace() const;
	string whatRace() const;
	int getHitPoints() const;
	int getMagicPointers() const;

	void setName(string name);
	void setRace(Race race);
	void setHitPoints(int hitPoints);
	void setMagicPoints(int magicPoints);

	virtual string attack() const = 0;

private:
	string name;
	Race race;
	int hitPoints;
	int magicPoints;
};

#endif 

