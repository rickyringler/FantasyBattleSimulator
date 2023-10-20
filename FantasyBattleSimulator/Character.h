#pragma once
#include <string>

using namespace std;

class Character {
private:
    string name, health, weapon1, weapon2, mana;
public:
    void setName(string a) { name = a; }
    void setHealth(string b) { name = b; }
    void setWeapon1(string c) { name = c; }
    void setWeapon2(string d) { name = d; }
    void setMana(string e) { name = e; }

    string returnName() { return name; }
    string returnHealth() { return health; }
    string returnWeapon1() { return weapon1; }
    string returnWeapon2() { return weapon2; }
    string returnMana() { return mana; }

};
