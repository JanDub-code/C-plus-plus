//
// Created by Johny on 12.11.2022.
//

#include "Inventory.h"

Inventory::Inventory(){};

void Inventory::printInventory() {
    int i = 1;
    for (auto item: m_availableItems) {
        std::cout << i << " " << item << std::endl;
        i++;
    }
}

void Inventory::addToInventory() {
    //m_availableItems.push_back();
}
