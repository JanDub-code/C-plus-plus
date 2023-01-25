#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string identifikace;
    int pocetGolu;
    int nejvicegoalu;
    string hracnejvice;
    ifstream vstup("nase_tymy.txt");
    if(vstup.is_open()){
        while(vstup>>identifikace>>pocetGolu){
            if(pocetGolu==0){
                cout<<identifikace<<"  hrac se netrefil ani jednou"<<endl;
            }
            if(pocetGolu>nejvicegoalu){
                nejvicegoalu=pocetGolu;
                hracnejvice=identifikace;
            }
            
        }
        cout<<"nejvic goalu strelil  "<<hracnejvice<<"   pocet goalu  "<<nejvicegoalu;
    }else {
        cerr<<"soubor nelze otevřit";
        return 1;
    }
    return 0;
}