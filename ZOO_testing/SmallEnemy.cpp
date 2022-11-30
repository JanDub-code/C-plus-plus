//
// Created by cicva on 11/12/2022.
//


#include "SmallEnemy.h"

SmallEnemy::SmallEnemy( int health,int strenght,  int expToDrop) {
    m_strenght = strenght;
    m_health = health;
    m_expToDrop = expToDrop;
}

int SmallEnemy::getHealth() {
    return m_health;
};
int SmallEnemy::getStrenght() {
    return m_strenght;
}
int SmallEnemy::getDroppedExp() {
    return m_expToDrop;
}
bool SmallEnemy::getStatus() {
    return m_isdead;
}
