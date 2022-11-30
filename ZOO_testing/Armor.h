//
// Created by Workstation on 12.11.2022.
//

#ifndef DOKUMENTY_ARMOR_H
#define DOKUMENTY_ARMOR_H

class Armor{
private:
    int m_defenceBonus;
public:
    Armor(int defenceBonus){
        m_defenceBonus = defenceBonus;
    }

    int getDefenceBonus();
};



#endif //DOKUMENTY_ARMOR_H
