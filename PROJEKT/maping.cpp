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

    Tile *getValue(unsigned int row, unsigned int col);

    void setValue(unsigned int row, unsigned int col, Tile *value);

    void setNewAppearance(unsigned int row, unsigned int col, std::string appearance);

    void print();

    ~Map();

private:

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
    int m_width;
    int m_height;
    std::vector<Map*>  m_mapMatrix;
public:
    MapMatrix(int width, int height){
        m_width = width;
        m_height = height;
        m_mapMatrix={};
    }

    void addMap(int x, int y, Map *map){
        if(x<m_width && y<m_height){
            m_mapMatrix.push_back(map);
        }
    }
        

    Map* getMap(int x, int y){
        if(x<m_width && y<m_height){
            return m_mapMatrix.at(x*m_width+y);
        }
        return nullptr;
    }

    void printMap(int x, int y){
        if(x<m_width && y<m_height){
            m_mapMatrix.at(x*m_width+y)->print();
        }
    }

};

//create matrix 3x3 using  


class MapMatrix1 {
    int m_width;
    int m_height;
    std::vector<Map*>  m_mapMatrix;
public:
    MapMatrix1(int width,int height){
        m_width = width;
        m_height = height;
        m_mapMatrix={};
    }

    void addMap(int x, int y, Map *map){
        if(x<m_width && y<m_height){
            m_mapMatrix.push_back(map);
        }
    }
        

    Map* getMap(int x, int y){
        if(x<m_width && y<m_height){
            return m_mapMatrix.at(x*m_width+y);
        }
        return nullptr;
    }

    void printMap(int x, int y){
        if(x<m_width && y<m_height){
            m_mapMatrix.at(x*m_width+y)->print();
        }
    }

};




int main() {
    //MapMatrix *mapMatrix = new MapMatrix(2,1);
    //Map* map = new Map(7, 7);
    //map->setNewAppearance(3,6,"@");
    //mapMatrix->addMap(0,0,map);

    //Map* map2 = new Map(5, 5);
    //map2->setNewAppearance(2,0,"@");
    //mapMatrix->addMap(1,0,map2);

    //mapMatrix->printMap(0,0);
    //mapMatrix->printMap(1,0);

    MapMatrix1 *mapMatrix1 = new MapMatrix1(3,3);
    Map* map1 = new Map(7, 7);
    map1->setNewAppearance(3,6,"@");
    mapMatrix1->addMap(0,0,map1);
    Map* map3 = new Map(5, 5);
    map3->setNewAppearance(2,0,"@");
    mapMatrix1->addMap(1,0,map3);
    mapMatrix1->printMap(0,0);
    mapMatrix1->printMap(1,0);


   
    return 0;
}