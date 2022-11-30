//
// Created by cicva on 11/12/2022.
//
//Hlavickovy soubor ktery se spolecne s HugeEnemy.cpp stara o nastaveni nejsilnejsiho monstra jakekoliv obtiznosti
#ifndef ZOO_PROJEKT_HUGEENEMY_H
#define ZOO_PROJEKT_HUGEENEMY_H
#include <iostream>

class HugeEnemy {
protected:
    int m_strenght;
    int m_health;
    int m_expToDrop;
    bool m_isdead = false;
public:
   HugeEnemy(int health,int strenght,int expToDrop);
    int getHealth();
    int getStrenght();
    int getDroppedExp();
    bool getStatus();
};


#endif //ZOO_PROJEKT_HUGEENEMY_H
