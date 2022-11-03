#include <iostream>
#include "section.h"

int main() {
    Container * container = new Container("A1",100);
    container->newProduct("Sword");
    container->printInfo();
    std::cout<<std::endl;
    container->deleteProduct("Sword");
    container->printInfo();
    std::cout<<std::endl;
    
    Section * section = new Section("A");
    section->addEmptyContainer("A1");
    section->addEmptyContainer("A2");

    section->addProductToContainer("Sword","A1");
    section->addProductToContainer("Shield","A2");
    section->printStatistics();
    
    delete section;
    delete container;
    
    return 0;
}

