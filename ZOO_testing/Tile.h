//
// Created by Johny on 27.11.2022.
//

#ifndef CV09_GRID_TILE_H
#define CV09_GRID_TILE_H

#include <iostream>

class Tile {
    std::string m_appearance;
public:
    Tile(std::string appearance);

    void setAppearance(std::string appearance);

    std::string getAppearance();
};


#endif //CV09_GRID_TILE_H
