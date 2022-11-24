#include <iostream>
#include <fstream>

int main() {
    int *Pole= new int[1000000];

    int index=0;
    while(index<1000000 and std::cin>>Pole[index]){
        index++;
    }
    std::ofstream bindata("data.bin",std::ios::binary);
    bindata.write((char*)Pole,index*sizeof(int));
    bindata.close();

    return 0;
}