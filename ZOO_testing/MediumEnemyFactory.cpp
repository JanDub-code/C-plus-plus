//
// Created by cicva on 11/12/2022.
//

#include "MediumEnemyFactory.h"

SmallEnemy* MediumEnemyFactory::getSmallEnemy() {
    return new SmallEnemy(45,15,100);
}
AverageEnemy* MediumEnemyFactory::getAverageEnemy() {
    return new AverageEnemy(60,20,200);
}
HugeEnemy* MediumEnemyFactory::getHugeEnemy() {
    return new HugeEnemy(100,15,500);
}