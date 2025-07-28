#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"
using namespace std;

void printMainMenu();
void printRaceMenu();
Race getRace(int raceNum);
Player* createPlayer(string name, int typeNum, int raceNum);
void printAll(const vector<Player*>& playerList);
void doCleanup(vector<Player*>& playerList);

int main() {
    int choice;
    int raceNum;
    string playerName;
    vector<Player*> playerList;

    printMainMenu();
    cin >> choice; 
    cin.get();

    while (choice != 0) {
        cout << "What would you like to name your character?" << endl;
        getline(cin, playerName);

        printRaceMenu();
        cin >> raceNum;
        cin.get();

        Player* tempPlayer = createPlayer(playerName, choice, raceNum);
        playerList.push_back(tempPlayer);

        printMainMenu();
        cin >> choice;
        cin.get();
    }//end while

    printAll(playerList);
    doCleanup(playerList);

    cout << "Program done!" << endl;

    return 0;
}

void printMainMenu() {
    cout << "\nChoose a class:\n"
        << "\t1 - Warrior\n"
        << "\t2 - Priest\n"
        << "\t3 - Mage\n"
        << "\t0 - Finish\n";
}//end printMainMenu

void printRaceMenu() {
    cout << "Choose a race:\n"
        << "\t1 - Human\n"
        << "\t2 - Elf\n"
        << "\t3 - Dwarf\n"
        << "\t4 - Orc\n"
        << "\t5 - Troll\n";
}//end printRaceMenu

Race getRace(int raceNum) {
    switch (raceNum) {
        case 1: return Race::HUMAN;
        case 2: return Race::ELF;
        case 3: return Race::DWARF;
        case 4: return Race::ORC;
        case 5: return Race::TROLL;
        default: return Race::HUMAN;
    }
}//end getRace

Player* createPlayer(string name, int typeNum, int raceNum) {
    Race race = getRace(raceNum);
    switch (typeNum) {
        case 1: return new Warrior(name, race);
        case 2: return new Priest(name, race);
        case 3: return new Mage(name, race);
        default: return nullptr;
    }
}

void printAll(const vector<Player*>& playerList) {
    for (const Player* player : playerList) {
        cout << "My name is "<<player->getName()
            << ". I'm a " << player->whatRace()
            << " and my attack is: " << player->attack() << endl;
    }
}

void doCleanup(vector<Player*>& playerList) {
    for (Player* player : playerList) {
        delete player;
    }
    playerList.clear();
}
