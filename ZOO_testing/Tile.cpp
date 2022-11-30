//
// Created by Johny on 27.11.2022.
//

#include "Tile.h"

Tile::Tile(std::string appearance) {
    m_appearance = appearance;
}

void Tile::setAppearance(std::string appearance) {
    m_appearance = appearance;
}

std::string Tile::getAppearance() {
    return m_appearance;
}