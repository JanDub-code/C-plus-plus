//
// Created by cicva on 11/12/2022.
//
//Hlavickovy soubor ktery se spolecne s AverageEnemy.cpp stara o nastaveni stredniho monstra jakekoliv obtiznosti
#ifndef ZOO_PROJEKT_AVERAGEENEMY_H
#define ZOO_PROJEKT_AVERAGEENEMY_H


class AverageEnemy {
protected:
    int m_strenght;
    int m_health;
    int m_expToDrop;
    bool m_isdead = false;
public:
    AverageEnemy(int health,int strenght,int expToDrop);
    int getHealth();
    int getStrenght();
    int getDroppedExp();
    bool getStatus();
};


#endif //ZOO_PROJEKT_AVERAGEENEMY_H
