#include <iostream>
using namespace std;

class Armor{
    public:
    int m_defenceBonus;
    Armor(int defenceBonus){
        m_defenceBonus = defenceBonus;
    }
};

class Knight{
    int m_defence;
    Armor * m_equippedArmor;
    public:
    Knight(int defence){
        m_defence = defence;
        m_equippedArmor = nullptr;
    }

    void equipArmor(Armor*armor){
        if(m_equippedArmor == nullptr){
            m_equippedArmor = armor;
        }else{
            cout <<"sorry you already have armor";
        }

    }

    int getDefence(){
        if(m_equippedArmor==nullptr){
            return m_defence;
        }else {
        return m_defence+m_equippedArmor->m_defenceBonus;
    }
    }
}
;

int main(){
    Knight*Artus= new Knight(10);
    Armor*chainmale=new Armor(25);

    Artus->equipArmor(chainmale);
    cout <<(Artus->getDefence());  
    return 0;
}