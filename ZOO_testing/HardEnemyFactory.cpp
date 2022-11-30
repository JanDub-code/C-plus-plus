//
// Created by cicva on 11/12/2022.
//

#include "HardEnemyFactory.h"

SmallEnemy* HardEnemyFactory::getSmallEnemy() {
    return new SmallEnemy(45,20,100);
}
AverageEnemy* HardEnemyFactory::getAverageEnemy() {
    return  new AverageEnemy(60,20,200);
}
HugeEnemy* HardEnemyFactory::getHugeEnemy() {
    return new HugeEnemy(100,20,500);
}