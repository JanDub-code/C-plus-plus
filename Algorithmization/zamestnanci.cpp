#include <iostream>
#include <fstream>
using namespace std;

ifstream vstup("zamestnanec.txt");

int main(){
    string jmeno;
    int plat;
    string line;
    string nejdelsi="";
    string druhanejdelsi="";
    while(getline(vstup,line)){
        if(line.length()>nejdelsi.length()){
            nejdelsi=line;
        if(line.length()<nejdelsi.length()){
            if(line.length()>druhanejdelsi.length()){
                druhanejdelsi=line;
            }
        }
        }
    }
    cout<<nejdelsi.length()<<", "<<druhanejdelsi.length();
    if(vstup.is_open()){
    while(vstup>>jmeno>>plat){
        if(plat>30000){
            cout<<jmeno<<endl;
        }
    }
    }else {
        cout<<"soubor se neda cist";
    }
    
    

    vstup.close();
    return 0;
}