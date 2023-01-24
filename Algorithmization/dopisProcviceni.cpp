#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int nejvetsi=0;
    ifstream vstup("dopis.txt");
    if(vstup.is_open()){
        string line;
        while(getline(vstup,line)){
            cout<<line<<endl;
            if(line.length()>nejvetsi){
                nejvetsi=line.length();
            }

        }
        vstup.close();
    }
    else{
        cout<<"Unable to open file";
    }
    
    string slovo;
    int pocetSlov=0;
    while(vstup>>slovo){
        pocetSlov++;
        cout<<slovo<<endl; 
    }
    cout<<pocetSlov;
    cout<<nejvetsi;
    
    
    return 0;
}