//
// Created by cicva on 11/12/2022.
//

#include "EasyEnemyFactory.h"

SmallEnemy* EasyEnemyFactory::getSmallEnemy() {
    return new SmallEnemy(30,10,100);
}
AverageEnemy* EasyEnemyFactory::getAverageEnemy() {
    return new AverageEnemy(45,15,200);
}
    HugeEnemy* EasyEnemyFactory::getHugeEnemy() {
    return new HugeEnemy(100,10,500);
}