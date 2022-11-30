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
    int x;
    int y;
public:
    Map(unsigned int width, unsigned int height);

    Map();

    int getX();

    int getY();

    Tile *getValue(unsigned int row, unsigned int col);

    void setValue(unsigned int row, unsigned int col, Tile *value);

    void setNewAppearance(unsigned int row, unsigned int col, std::string appearance);

    void print();

    ~Map();

    private:

    bool isInMap(unsigned int row, unsigned int col);
};

Map::Map(unsigned int width, unsigned int height) {
    x=width;
    y=height;
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
 
int Map::getX(){
    return x;
}
int Map::getY(){
    return y;
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
    std::vector<std::vector<Map *> > m_map;
public:
    MapMatrix(unsigned int width, unsigned int height);

    Map *getValue(unsigned int row, unsigned int col);

    void setValue(unsigned int row, unsigned int col, Map *value);

    void print(unsigned int row, unsigned int col);

    void printAllValuesInMatrix();

    ~MapMatrix();
};

MapMatrix::MapMatrix(unsigned int width, unsigned int height) {
    if (width > 0 && height > 0) {

        for (int x = 0; x < height; x++) {
            std::vector<Map *> row;

            for (int y = 0; y < width; y++) {
                row.push_back(new Map());
            }

            m_map.push_back(row);
        }

    } else {
        std::cerr << "Cannot initialize the map!" << std::endl;
    }
}



Map *MapMatrix::getValue(unsigned int row, unsigned int col) {
    if (row, col) {
        return m_map.at(row).at(col);
    } else {
        return nullptr;
    }
}

void MapMatrix::setValue(unsigned int row, unsigned int col, Map *value){
        delete m_map.at(row).at(col); // delete the old tile to prevent memory leak
        m_map.at(row).at(col) = value;
    
}

void MapMatrix::print(unsigned int row, unsigned int col) {
    if (row, col) {
        m_map.at(row).at(col)->print();
    }
}

void MapMatrix::printAllValuesInMatrix() {
    for (std::vector<Map *> row: m_map) {
        for (Map *cell: row) {
            cell->print();
        }
        std::cout << std::endl;
    }
}

MapMatrix::~MapMatrix() {
    for (auto row: m_map) {
        for (auto cell: row) {
            delete cell;
        }
    }
}


void printMapOnTheRight(int positionX, int positionY, MapMatrix* mapMatrix) {
    int x = positionX;
    int y = positionY+1;
    mapMatrix->print(x, y);
}

void printMapOnTheLeft(int positionX, int positionY, MapMatrix* mapMatrix) {
    int x = positionX;
    int y = positionY-1;
    mapMatrix->print(x, y);
}

void printMapOnTheTop(int positionX, int positionY, MapMatrix* mapMatrix) {
    int x = positionX-1;
    int y = positionY;
    mapMatrix->print(x, y);
}

void printMapOnTheBottom(int positionX, int positionY, MapMatrix* mapMatrix) {
    int x = positionX+1;
    int y = positionY;
    mapMatrix->print(x, y);
}

//create function that finds door and returns position
void findDoor(Map* map){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(map->getValue(i, j)->getAppearance() == "D"){
                int positionX = i;
                int positionY = j;
                std::cout<<"Door is at: "<<positionX<<", "<<positionY<<std::endl;
            }
        }
    }
}


int main() {
    //map->print();
    Map *map3 = new Map(1, 1);
    Map* map2 = new Map(1, 1);
    Map* map4 = new Map(1, 1);
    Map* map5 = new Map(1, 1);
    MapMatrix *mapMatrix = new MapMatrix(5, 5);
    //mapMatrix->print(1,1);
    mapMatrix->setValue(2, 1, map5);
    mapMatrix->setValue(2, 2, map3);
    mapMatrix->setValue(3, 3, map4);

    mapMatrix->setValue(1, 2, map2);
    //mapMatrix->print(1,2);

    mapMatrix->printAllValuesInMatrix();

    Map* map6 = new Map(4, 4);
    Map* map7 = new Map(8, 8);

    mapMatrix->setValue(4, 2, map6);
    mapMatrix->setValue(4, 3, map7);
    printMapOnTheRight(4, 1, mapMatrix);

    Map *map = new Map(5, 6);
    MapMatrix*mapMatrix1=new MapMatrix(5,5);

    map->setNewAppearance(1, 2, "D");
    mapMatrix1->setValue(1, 1, map);

    map->print();
    findDoor(map);




    return 0;
}