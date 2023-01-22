#include <iostream>
using namespace std;

int main(){
    string ahoj="Kockopes1474etol97";
    int pocetCisel=0;

    for(int i=ahoj.length()-1;i<ahoj.length();i--){
        cout<<ahoj[i];
        if(isdigit(ahoj[i])){
            pocetCisel++;
        }
    }
    cout<<", "<<endl;
    cout<<pocetCisel;

    return 0;
}