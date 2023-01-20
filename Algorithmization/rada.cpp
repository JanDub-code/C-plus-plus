#include <iostream>
using namespace std;
//Na vstupu se nachází přirozené číslo N a za ním řada N celých čísel. Vypište na standardní výstup počet podprůměrných hodnot vstupní řady.
int N;
typedef int Pole;
int pocet;
int soucet;

int main(){
    cin>>N;
    Pole pole[N];
    for(int i=0;i<N;i++){
        cin>>pole[i];
        pocet++;
        soucet+=pole[i];
    }
    int prumer=soucet/pocet;
    int podprumer=0;
    for(int i=0;i<N;i++){
        if(pole[i]<prumer){
            podprumer++;
        }
    }
    cout<<podprumer;

    return 0;
}