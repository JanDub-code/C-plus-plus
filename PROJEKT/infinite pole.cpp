#include <iostream>

 

int main() {
    while(true){
           for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(i==0 || i==7 || j==0 || j==7){
                std::cout<<"X";
            }else{
                std::cout<<" ";
            }
        }
        std::cout<<std::endl;
    }
    //get the input from the user
    char input;
    std::cin>>input;
    //move the player

    //clear the screen
    system("cls");
}
    
    return 0;
}