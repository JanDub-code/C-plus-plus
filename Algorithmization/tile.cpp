#include <iostream>
#include <vector>
class Tile {
    std::string m_appearance;
    vector<enemy> m_enemies;
    vector<item> m_items;
public:
    Tile(std::string appearance);

    void setAppearance(std::string appearance);

    std::string getAppearance();

    void setEnemies(Enemy* enemies);

    void setItems(Item* items);

    void getEnemies();

    void getItems();

    std::vector getEnemies() {
        return m_enemies;
    }
};

Tile::Tile(std::string appearance) {
    m_appearance = appearance;
    m_enemies = {};
    m_items = {};
}

void Tile::setAppearance(std::string appearance) {
    m_appearance = appearance;
}

std::string Tile::getAppearance() {
    return m_appearance;
}

void Tile::setEnemies(Enemy* enemies) {
    m_enemies.push_back(enemies);
}

void Tile::setItems(Item* items) {
    m_items.push_back(items);
}

void Tile::getEnemies() {
    for (int i = 0; i < m_enemies.size(); i++) {
        std::cout << m_enemies[i].getAppearance() << std::endl;
    }
}