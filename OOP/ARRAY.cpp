#include <iostream>
using namespace std;
#include <array>

class Armor{
    int m_defenceBonus;
    public:

    Armor(int defenceBonus){
        m_defenceBonus = defenceBonus;
    }

    int getArmorDefence(){
        return m_defenceBonus;
    }
};
//seznam konstantní délky : čísla

int main() {
    //deklarace pole cisel
    array<int, 5> numbers ={0,1,2,3,4};
    // deklarace a iniacializace
    array<float,3> otherNumbers = {1.5, 2.5, 3.5};
    // ulozeni hodnot indexujeme od 0
    numbers[0]=1;
    // nebo lepe
    otherNumbers.at(0)=1.0;
    //cteni hodnot
    cout<<"Number: "<<otherNumbers.at(0)<<endl;
    cout << "3: "<<numbers.at(3)<<endl;
    cout << "size : "<<numbers.size()<<endl;

    for(int number:numbers){
        cout<<"number: "<<number<<endl;
    }

    //ARMOR ulozeni
    array<Armor*,5>armors;
    Armor*chain= new Armor(10);
    armors.at(0)= chain;

    cout<< armors.at(0)<<endl;

    delete chain;
    return 0;

    //dohledat si prednasku vektor je dynamický array je statický
};