#include <iostream>
#include <vector>

class Tile {
    std::string m_appearance;
public:
    Tile(std::string appearance);

    void setAppearance(std::string appearance);

    std::string getAppearance();
};

Tile::Tile(std::string appearance) {
    m_appearance = appearance;
}

void Tile::setAppearance(std::string appearance) {
    m_appearance = appearance;
}

std::string Tile::getAppearance() {
    return m_appearance;
}

class Map {
    std::vector<std::vector<Tile *> > m_map;
public:
    Map(unsigned int width, unsigned int height);

    Map();

    Tile *getValue(unsigned int row, unsigned int col);

    void setValue(unsigned int row, unsigned int col, Tile *value);

    void setNewAppearance(unsigned int row, unsigned int col, std::string appearance);

    void print();

    ~Map();



    bool isInMap(unsigned int row, unsigned int col);
};

Map::Map(unsigned int width, unsigned int height) {
    if (width > 0 && height > 0) {

        for (int x = 0; x < height; x++) {
            std::vector<Tile *> row;

            for (int y = 0; y < width; y++) {
                row.push_back(new Tile(y == 0  || y == width-1 || x == 0 || x == height-1 ? "#" : " "));
            }

            m_map.push_back(row);
        }

    } else {
        std::cerr << "Cannot initialize the map!" << std::endl;
    }
}
 
Map::Map(){

}

bool Map::isInMap(unsigned int row, unsigned int col) {
    if (row >= m_map.size()) { // m_map.size() == height
        std::cerr << "Map::isInMap: row is " << row
                  << ", max. is  " << m_map.size() - 1 << std::endl;
        return false;
    }

    if (col >= m_map.at(0).size()) { // m_map.at(0).size() == width
        std::cerr << "Map::isInMap: column is " << col
                  << ", max. is  " << m_map.at(0).size() - 1 << std::endl;
        return false;
    }

    return true;
}

Tile *Map::getValue(unsigned int row, unsigned int col) {
    if (isInMap(row, col)) {
        return m_map.at(row).at(col);
    } else {
        return nullptr;
    }
}

void Map::setValue(unsigned int row, unsigned int col, Tile *value) {
    if (isInMap(row, col)) {
        delete m_map.at(row).at(col); // delete the old tile to prevent memory leak
        m_map.at(row).at(col) = value;
    }
}

void Map::setNewAppearance(unsigned int row, unsigned int col, std::string appearance) {
    if (isInMap(row, col)) {
        m_map.at(row).at(col)->setAppearance(appearance);
    }
}


void Map::print() {
    for (std::vector<Tile *> row: m_map) {
        for (Tile *cell: row) {
            std::cout << cell->getAppearance() << " ";
        }
        std::cout << std::endl;
    }
}

Map::~Map() {
    for (auto row: m_map) {
        for (auto cell: row) {
            delete cell;
        }
    }
}


class MapMatrix {
    std::vector<std::vector<Map *> > m_mapMatrix;
public:
    MapMatrix(unsigned int width, unsigned int height, unsigned int depth);

    MapMatrix();

    Map *getValue(unsigned int row, unsigned int col, unsigned int depth);

    void setValue(unsigned int row, unsigned int col, unsigned int depth, Map *value);

    void setNewAppearance(unsigned int row, unsigned int col, unsigned int depth, std::string appearance);

    void print();

    ~MapMatrix();
};






int main() {
    Map *map = new Map(1, 1);
    Map *map3 = new Map(1, 1);
    Map* map2 = new Map(1, 1);
    Map* map4 = new Map(1, 1);
    Map* map5 = new Map(1, 1);
   



    return 0;
}