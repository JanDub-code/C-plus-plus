#include <iostream>
using namespace std;
string pomocna;
int splneno;

void zjisti(string Co,string Kde[],int pocet){
    for(int i=0;i<pocet;i++){
        pomocna=Kde[i];
        for(int i=0;i<pomocna[i]!='\0';i++){
            pomocna[i]=toupper(pomocna[i]);
        }
        if(Co==pomocna){
            cout<<"shoda je :";
            cout<<pomocna;
            splneno=1;
        }

    }
    if(splneno!=1){
        cout<<"nenalezen";
    }

    
}

string Co="AHOJ";
string Kde[]={"ahoj","melon","kripl"};

int main(){
    zjisti(Co,Kde,3);
    return 0;
}