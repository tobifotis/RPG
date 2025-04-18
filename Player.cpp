#include "Player.h"

//---------------- Constructor
Player::Player(string name, Race race, int hitPoints, int magicPoints)
{
    this->name = name;
    this->race = race;
    this->hitPoints = hitPoints;
    this->magicPoints = magicPoints;
}

//---------------- GETTERS
string Player::getName() const
{
    return name;
}

Race Player::getRace() const
{
    return race;
}

int Player::getHitPoints() const
{
    return hitPoints;
}
int Player::getMagicPoints() const
{
    return magicPoints;
}

//----------------------- SETTERS
void Player::setName(string name)
{
    this->name = name;
}
void Player::setRace(Race race)
{
    this->race = race;
}

void Player::setHitPoints(int hitPoints)
{
    this->hitPoints = hitPoints;
}
void Player::setMagicPoints(int magicPoints)
{
    this->magicPoints = magicPoints;
}

string Player::whatRace() const
{
    string result = "";

    if (race == HUMAN)
    {
        result = "Human";
    }
    else if (race == ELF)
    {
        result = "Elf";
    }
    else if (race == DWARF)
    {
        result = "Dwarf";
    }
    else if (race == ORC)
    {
        result = "Orc";
    }
    else if (race == TROLL)
    {
        result = "Troll";
    }

    return result;
}
