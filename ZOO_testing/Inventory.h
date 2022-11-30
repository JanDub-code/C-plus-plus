//
// Created by Johny on 12.11.2022.
//

#ifndef CV08_MENU_INVENTORY_H
#define CV08_MENU_INVENTORY_H

#include <vector>
#include <iostream>

class Inventory {
private:
    std::vector<Inventory *> m_availableItems;

public:
    Inventory();

    void printInventory();

    void addToInventory();
};


#endif //CV08_MENU_INVENTORY_H
