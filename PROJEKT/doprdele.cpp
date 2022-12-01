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
    for(int i = 0; i < map->getX()-1; i++){
        for(int j = 0; j < map->getY()-1; j++){
            if(map->getValue(i, j)->getAppearance() == "D"){
                int positionX = i;
                int positionY = j;
                std::cout<<"Door is at: "<<positionX<<", "<<positionY<<std::endl;
                int position_X_door = i;
            int position_Y_door = j;
            int positin_X_wall;
            int position_Y_wall;
            if (position_X_door == 1){
        std::cout<<"Door is on the top wall"<<std::endl;
        positin_X_wall=1;
        position_Y_wall=1;
    }
    if (position_X_door == map->getY()-1){
        std::cout<<"Door is on the bottom wall"<<std::endl;
        positin_X_wall=2;
        position_Y_wall=2;
    }
    if (position_Y_door==1){
        positin_X_wall=1;
        position_Y_wall=1;
    }
    if(position_Y_door==map->getY()){
        positin_X_wall=map->getY();
        position_Y_wall=map->getY();
    }           
            }
        }
    }
}

void whichWall(Map * map){
    int positin_X_wall;
    int position_Y_wall;
    int position_X_door;
    int position_Y_door;
    for(int i = 0; i < map->getY()-1; i++){
        for(int j = 0; i<map->getX()-1; j++){
            if(map->getValue(i, j)->getAppearance() == "D"){
                position_X_door = i;
                position_Y_door = j;
                std::cout<<"Door is at: "<<position_X_door<<", "<<position_Y_door<<std::endl;
            }
        }
    }
    if (position_X_door == 1){
        std::cout<<"Door is on the top wall"<<std::endl;
        positin_X_wall=1;
        position_Y_wall=1;
    }
    if (position_X_door == map->getX()){
        std::cout<<"Door is on the bottom wall"<<std::endl;
        positin_X_wall=map->getX();
        position_Y_wall=map->getX();
    }
    if (position_Y_door==1){
        positin_X_wall=1;
        position_Y_wall=1;
    }
    if(position_Y_door==map->getY()){
        positin_X_wall=map->getY();
        position_Y_wall=map->getY();
    }
    
    
}

void movingBetweenMaps(){

}

int main() {
    MapMatrix *mapMatrix = new MapMatrix(5, 5);
    
    Map* map6 = new Map(4, 4);
    Map* map7 = new Map(8, 8);

    mapMatrix->setValue(4, 2, map6);
    mapMatrix->setValue(4, 3, map7);
    printMapOnTheRight(4, 1, mapMatrix);

    Map *map = new Map(5, 6);
    MapMatrix*mapMatrix1=new MapMatrix(5,5);

    map->setNewAppearance(1, 2, "D");
    mapMatrix1->setValue(1, 2, map);

    Map* test=new Map(6,5);
    test->setNewAppearance(4,2,"D");
    mapMatrix1->setValue(1,1,test);

    map->print();
    findDoor(map);
    test->print();
    findDoor(test);
    
   
    
    
    return 0;
}