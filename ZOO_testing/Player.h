//
// Created by Workstation on 11.11.2022.
//

#ifndef ZOO_PROJEKT_PLAYER_H
#define ZOO_PROJEKT_PLAYER_H

#include <string>
#include "Armor.h"
#include "Weapon.h"

class Player{
private:
    int m_health;
    int m_strength;
    int m_dexterity;
    int m_level;
    std::string m_name;
    std::string m_className;
    int m_xp;
    int m_nextLevelXp;
    int m_attack;
    int m_defence;
    Armor * m_equippedArmor;
    Weapon * m_equippedWeapon;
    int m_x;
    int m_y;
    std::string symbol;
    // inventář
public:
    Player(int x, int y, std::string symbol);
    Player();

    void move(char direction);
    void print();
    int returnX();
    int returnY();
    int setX(int x);
    int setY(int y);
    bool isDead();
    void equippArmor(Armor* armor);
    void equippWeapon(Weapon* weapon);
    void takeDamage(int damage);
    void createClass();
    bool attack();
    void levelUp();
    void rest();
    void viewStatistics();
    void victory(int xp);
    void gameover();
    void displayHealth();
    std::string getName();
};


#endif //ZOO_PROJEKT_PLAYER_H
