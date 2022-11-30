//
// Created by Workstation on 11.11.2022.
//

#include <iostream>
#include "Player.h"

Player::Player(){
    m_name = "Default";
    m_className = "Default";
    m_dexterity = 0;
    m_health = 0;
    m_strength = 0;
    m_attack = 0;
    m_defence = 0;
    m_level = 0;
    m_xp = 0;
    m_nextLevelXp = 0;
    m_equippedArmor = nullptr;
    m_equippedWeapon = nullptr;
    int m_x;
    int m_y;
    std::string symbol;
}

bool Player::isDead() {
    if(m_health<=0){
        return true;
    }else {
        return false;
    }
}

void Player::equippArmor(Armor *armor) {
    m_defence+= armor->getDefenceBonus();
    m_equippedArmor= armor;
}

void Player::equippWeapon(Weapon *weapon) {
    m_attack+= weapon->getAttackBonus();
    m_equippedWeapon = weapon;
}

void Player::createClass() {
    std::cout << "Character creation" << std::endl;
    std::cout << "==========================" << std::endl;

    std::cout << "Enter your character's name: ";
    std::cin >> m_name;

    std::cout << "Select a character class number..." << std::endl;
    std::cout << "1: Knight 2: Assasin 3: Archer ";
    int characterNum = 1;
    std::cin >> characterNum;

    switch (characterNum) {
        case 1:
            m_className = "Knight";
            m_strength = 20;
            m_dexterity = 10;
            m_defence += m_dexterity / 2;
            m_attack += m_strength;
            m_health = 50;
            m_nextLevelXp = 1000;
            m_level = 1;
            m_xp = 0;
            m_equippedWeapon = nullptr;
            m_equippedArmor = nullptr;


            break;

        case 2:
            m_className = "Assasin";
            m_strength = 10;
            m_dexterity = 24;
            m_defence += m_dexterity / 2;
            m_attack += m_strength;
            m_health = 40;
            m_nextLevelXp = 1000;
            m_level = 1;
            m_xp = 0;
            m_equippedWeapon = nullptr;
            m_equippedArmor = nullptr;

            break;

        case 3:
            m_className = "Archer";
            m_strength = 10;
            m_dexterity = 30;
            m_defence += m_dexterity / 2;
            m_attack += m_dexterity;
            m_health = 30;
            m_nextLevelXp = 1000;
            m_level = 1;
            m_xp = 0;
            m_equippedWeapon = nullptr;
            m_equippedArmor = nullptr;

            break;
    }
}

void Player::viewStatistics() {
    std::cout << "PLAYER STATS" << std::endl;
    std::cout << "============" << std::endl;
    std::cout << std::endl;

    std::cout << "Name  = " << m_name << std::endl;
    std::cout << "Class = " << m_className << std::endl;
    std::cout << "Health    = " <<m_health  << std::endl;
    std::cout << "Strength  = " <<m_strength  << std::endl;
    std::cout << "Dexterity = " << m_dexterity << std::endl;
    std::cout << "Attack = " << m_attack << std::endl;
    std::cout << "Defence = " << m_defence << std::endl;
    std::cout << "Xp    = " << m_xp << std::endl;
    std::cout << "Xp for next level = " <<m_nextLevelXp  << std::endl;
    std::cout << "Level = " << m_level << std::endl;
    std::cout << "Armor = " << m_equippedArmor << std::endl; //ukazující na místo v paměti
    std::cout <<"Weapon = "<<m_equippedWeapon<< std::endl; //ukazující na místo v paměti


    std::cout << std::endl;
    std::cout << "END PLAYER STATS" << std::endl;
    std::cout << "================" << std::endl;
    std::cout << std::endl;
}

Player::Player(int x, int y, std::string symbol) {
    m_name = "Default";
    m_className = "Default";
    m_dexterity = 0;
    m_health = 0;
    m_strength = 0;
    m_attack = 0;
    m_defence = 0;
    m_level = 0;
    m_xp = 0;
    m_nextLevelXp = 0;
    m_equippedArmor = nullptr;
    m_equippedWeapon = nullptr;
    this->m_x = y;
    this->m_y = x;
    this->symbol = symbol;
}

void Player::move(char direction) {
    switch(direction){
        case 'w':
            m_x--;
            break;
        case 's':
            m_x++;
            break;
        case 'a':
            m_y--;
            break;
        case 'd':
            m_y++;
            break;
    }
}

void Player::print() {
    std::cout << symbol ;
}

int Player::returnX() {
    return  m_x;
}

int Player::returnY() {
    return  m_y;
}

int Player::setX(int x) {
    m_x = x;
};

int Player::setY(int y) {
    m_y = y;
};