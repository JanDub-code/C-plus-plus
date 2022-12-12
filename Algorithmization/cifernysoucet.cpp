#include <iostream>




int main() {
    int x =34272;
    int vysledek=0;
    while (x%10 != 0) {
        
        std::cout << x%10 << std::endl;
        vysledek = vysledek + x%10;
        x = x/10;
        
        
        std::cout << vysledek << std::endl;
    }
    
    return 0;
}