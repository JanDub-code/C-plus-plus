#include <iostream>
using namespace std;

int main(){
    int x=0;
    int suma=0;
    int pocet=0;
    while(cin>>x){
        if(x==-333){
            break;
        }
        suma+=x;
        pocet++;
    }
    // prumer pole s neurčitým množstvím prvků
    cout<< float(suma)/float(pocet)<<endl;

    string ahoj="ahojky";
    for(int i=0;i<ahoj.length();i++){
        if(ahoj[i] >='a' or ahoj[i]<='z'){
            ahoj[i] = ahoj[i]-32;
        }
    }
    cout<<ahoj;

    char c;
    
    string vysledek="";
    cin >>c;
    while(c!='x'){
        vysledek.push_back(c);
        cin>>c;
    }

    cout<<vysledek<<endl;

    return 0;
}