#include <iostream>
#include "EnemyFactory.h"
#include "EasyEnemyFactory.h"
#include "MediumEnemyFactory.h"
#include "HardEnemyFactory.h"
#include "Player.h"
#include "Map.h"
#include "MapMatrix.h"

int main() {
    // testovani volby obtiznosti 1 easy,2 medium,3 hard
    int difficulty;
    std::cout << "choose your difficulty: ";
    std::cin >> difficulty;
    EnemyFactory* ef = nullptr;
    switch(difficulty){
        case 1:
            ef = new EasyEnemyFactory();
            break;
        case 2:
            ef = new MediumEnemyFactory();
            break;
        case 3:
            ef = new HardEnemyFactory();
            break;
    }
    SmallEnemy* skeleton = ef->getSmallEnemy();
    AverageEnemy* goblin = ef->getAverageEnemy();
    HugeEnemy* ogre= ef->getHugeEnemy();
    // demonstrativni vypis vlastnosti monster (po dokonceni balancovani smazu)
    std::cout << "#SMALL ENEMY#" << std::endl;
    std::cout << "Health: " << skeleton->getHealth() << std::endl;
    std::cout << "Strenght: " << skeleton->getStrenght() << std::endl;
    std::cout << "Exp to drop: " << skeleton->getDroppedExp() << std::endl;
    std::cout << "Is dead: " << skeleton->getStatus() << std::endl;
    std::cout << "_________________" <<  std::endl;
    std::cout << "#AVERAGE ENEMY#" << std::endl;
    std::cout << "Health: " << goblin->getHealth() << std::endl;
    std::cout << "Strenght: " << goblin->getStrenght() << std::endl;
    std::cout << "Exp to drop: " << goblin->getDroppedExp() << std::endl;
    std::cout << "Is dead: " << goblin->getHealth() << std::endl;
    std::cout << "_________________" << std::endl;
    std::cout << "#HUGE ENEMY#" <<  std::endl;
    std::cout << "Health: " << ogre->getHealth() << std::endl;
    std::cout << "Strenght: " << ogre->getStrenght() << std::endl;
    std::cout << "Exp to drop: " << ogre->getDroppedExp() << std::endl;
    std::cout << "Is dead: " << ogre->getStatus() << std::endl;
    std::cout << "_________________" <<std::endl;
    delete skeleton;
    delete goblin;
    delete ogre;


    Player* player= new Player;
    player->createClass();
    Weapon* sword= new Weapon(5);
    player->equippWeapon(sword); //přidat do konstruktoru jména pro zobrazení jména zbraně a brnění ve statech
    player->viewStatistics(); //m_equipped weapon a armor ukazující na místo v paměti opravit

    Player* joker = new Player(2,2,"P");
    Armor*chain=new Armor(15);
    joker->equippArmor(chain);
    joker->viewStatistics();

    Map *map = new Map(5, 6);
    MapMatrix*mapMatrix=new MapMatrix(5,5);



    int x = joker->returnX();
    int y = joker->returnY();

    map->setNewAppearance(x, y, "P");
    map->setNewAppearance(1, 4, "D");

    mapMatrix->setValue(1,1,map);
    mapMatrix->printOutMap(1,1);

    map->print();
    bool endLoop = false;

    while(endLoop == false)
    {
        bool notwall = false;
        char test;
        std::cout<<"Pohyb hrace: (zadej w a s d)" <<std::endl;
        std::cin>>test;
        /*if(test == 'w' and map->getValue(joker->returnX()-1,joker->returnY())->getAppearance() != "#"){
            notwall = true;
        }
        else if(test == 's' and map->getValue(joker->returnX()+1,joker->returnY())->getAppearance() != "#"){
            notwall = true;
        }
        else if(test == 'a' and map->getValue(joker->returnX(),joker->returnY()-1)->getAppearance() != "#"){
            notwall = true;
        }
        else if(test == 'd' and map->getValue(joker->returnX(),joker->returnY()+1)->getAppearance() != "#"){
            notwall = true;
        }*/



        map->setNewAppearance(x, y, "P");

        joker->move(test);

        int x2 = joker->returnX();
        int y2 = joker->returnY();

        if(map->getValue(x2,y2)->getAppearance() == "#") {
            joker->setX(x);
            joker->setY(y);

        } else if (map->getValue(x2,y2)->getAppearance() == "D") {
            endLoop = true;

            map->setNewAppearance(x, y, " ");

            x = joker->returnX();
            y = joker->returnY();

            map->setNewAppearance(x, y, "P");

        } else {
            map->setNewAppearance(x, y, " ");

            x = joker->returnX();
            y = joker->returnY();

            map->setNewAppearance(x, y, "P");
        }





        if (notwall == true){

        }
       // map->setNewAppearance(x, y, "P");
        for(int i = 0;i<=25;i++){
            std::cout <<std::endl;
        }
        map->print();
    }

    delete sword;
    delete player;

    return 0;

}
