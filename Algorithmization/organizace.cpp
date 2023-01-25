#include <iostream>
#include <fstream>
using namespace std;

int main(){
    const int max=10;
    int id[max];
    float hodiny[max];
    int pracoviste[max];
    int pocet;
    ifstream vstup("organizace.txt");
    if(vstup.is_open()){
        while(vstup>>id[pocet]>>hodiny[pocet]>>pracoviste[pocet]){
            pocet++;
        }    
    }else {
        cerr<<"nemohu precist";
    }
    for(int i=0;i<max;i++){
        if(pracoviste[i]==i){}
    }
  

    return 0;
}