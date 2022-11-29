#include <iostream>


//create a moving object for our map displayed as 'P' with switch cases for movement inside a while loop game field that is 8x8
class Player{
    int x;
    int y;
    std::string symbol;
    public:
    Player(int x, int y, std::string symbol){
        this->x = x;
        this->y = y;
        this->symbol = symbol;
    }
    void move(char direction){
        switch(direction){
            case 'w':
                y--;
                break;
            case 's':
                y++;
                break;
            case 'a':
                x--;
                break;
            case 'd':
                x++;
                break;
        }
    }
    void print(){
        std::cout << symbol ;
    }

    int returnX(){
        return x;
    }

    int returnY(){
        return y;
    }
};

int main(){
//display 8x8 room with "X" as a walls and " " as a floor and put it all inside infinite loop 
// for refreshing the room after every move (keep the room static)
// use switch cases for movement and if statements for collision detection with walls
// also use a player class inside this loop
Player * player = new Player(3,3,"P");
    while(true){
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(i == 0 || i == 7 || j == 0 || j == 7){
                    std::cout << "X";
                }else if(i == (player->returnY()) && (j == (player->returnX()))){
                    player->print();
                }else{
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }
        char input;
        std::cin >> input;
        player->move(input); // make if system for movement and inventory if inventory is chosen map closes and we see only inventory
           // system("cls"); for windows and system("clear"); for linux
        
        
        
    }
    return 0;
}