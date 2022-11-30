//
// Created by cicva on 11/12/2022.
//
//Hlavickovy soubor ktery se spolecne s SmallEnemy.cpp stara o nastaveni nejslabsiho monstra jakekoliv obtiznosti
#ifndef ZOO_PROJEKT_SMALLENEMY_H
#define ZOO_PROJEKT_SMALLENEMY_H


class SmallEnemy {
protected:
    int m_strenght;
    int m_health;
    int m_expToDrop;
    bool m_isdead = false;
public:

    SmallEnemy(int health,int strenght,int expToDrop);
    int getHealth();
    int getStrenght();
    int getDroppedExp();
    bool getStatus();
};


#endif //ZOO_PROJEKT_SMALLENEMY_H
