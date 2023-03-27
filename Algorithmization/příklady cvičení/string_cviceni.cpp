#include <iostream>
using namespace std;

int main(){

    string text="ahoj 123 456 789 OJ";
    //očekávaný počet číšel 3
    //getline(cin,text);
    int pocet=0;
    for(int i=0;i<text.length();i++){
        if(text[i]<='9' and text[i]>='0' and !(text[i+1]<='9' and text[i+1]>='0')){
            pocet++;
        }
    }

    //pocet velkych pismen
    int pocetVelkych=0;
    for(int i=0;i<text.length();i++){
        if(text[i]<='Z' and text[i]>='A'){
            pocetVelkych++;
        }
    }

    //počty jednotlivých znaků a jejich výskyt
    int pocetZnaku[256];
    for(int i=0;i<256;i++){
        pocetZnaku[i]=0;
    }
    for(int i=0;i<text.length();i++){
        pocetZnaku[text[i]]++;
    }  
    for(int i=0;i<256;i++){
        if(pocetZnaku[i]>0){
            cout<<"znak "<<(char)i<<" se vyskytuje "<<pocetZnaku[i]<<"krát"<<endl;
        }
    }


    cout<<"pocet čísel: "<<pocet<<endl;
    cout<<"pocet velkych pismen: "<<pocetVelkych<<endl;
    return 0;
}