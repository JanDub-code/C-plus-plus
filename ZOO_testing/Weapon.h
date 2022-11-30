//
// Created by Workstation on 12.11.2022.
//

#ifndef DOKUMENTY_WEAPON_H
#define DOKUMENTY_WEAPON_H

class Weapon{
private:
    int m_attackBonus;
public:
    Weapon(int attackBonus){
        m_attackBonus = attackBonus;
    }

    int getAttackBonus();
};

#endif //DOKUMENTY_WEAPON_H
