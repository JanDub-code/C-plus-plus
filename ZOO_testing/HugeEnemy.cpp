//
// Created by cicva on 11/12/2022.
//

#include "HugeEnemy.h"

HugeEnemy::HugeEnemy(int health,int strenght, int expToDrop) {

    m_strenght = strenght;
    m_health = health;
    m_expToDrop = expToDrop;
}
int HugeEnemy::getHealth() {
    return m_health;
};
int HugeEnemy::getStrenght() {
    return m_strenght;
}
int HugeEnemy::getDroppedExp() {
    return m_expToDrop;
}
bool HugeEnemy::getStatus() {
    return m_isdead;
}