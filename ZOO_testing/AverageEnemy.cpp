//
// Created by cicva on 11/12/2022.
//

#include "AverageEnemy.h"

AverageEnemy::AverageEnemy(int health,int strenght,int expToDrop) {

    m_strenght = strenght;
    m_health = health;
    m_expToDrop = expToDrop;
}
int AverageEnemy::getHealth(){
    return m_health;
}
int AverageEnemy::getStrenght() {
    return m_strenght;
}
int AverageEnemy::getDroppedExp() {
    return m_expToDrop;
}
bool AverageEnemy::getStatus() {
    return m_isdead;
}