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
    Knight(int defence,int armorDefence){
        m_defence = defence;
        m_equippedArmor = new Armor(armorDefence);
    }

    ~Knight(){
        delete m_equippedArmor;
    }

    int getDefence(){
        return m_defence+m_equippedArmor;   }
    }

;

int main(){
    Knight*Artus= new Knight(10,25);
    //Armor*chainmale=new Armor(25);

    //Artus->equipArmor(chainmale);
    cout <<(Artus->getDefence());  
    return 0;
}