#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

enum Race
{
    HUMAN,
    ELF,
    DWARF,
    ORC,
    TROLL
};

class Player
{
private:
    string name;
    Race race;
    int hitPoints;
    int magicPoints;

public:
    Player(string name, Race race, int hitPoints, int magicPoints);

    string getName();
    Race getRace();

    int getHitPoints();
    int getMagicPoints();

    void setName(string name);
    void setRace(Race race);

    void setHitPoints(int hitPoints);
    void setMagicPoints(int magicPoints);

    string whatRace();

    virtual string attack() const = 0;
};
#endif