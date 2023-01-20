#include <iostream>
using namespace std;
//Na vstupu je zadáno přirozené číslo N a za ním řada N celých čísel představujících měsíční náklady určité firmy v korunách.
//Vypište pořadové číslo měsíce, v němž byly měsíční náklady této firmy za zadané období nejmenší, a počet měsíců, v nichž náklady překročily 10 tisíc Kč.

int N;
typedef int Pole;
int poradi;
int pocet;
int pocetMesicu;
int nejmensi=10000;

int main(){
    cin>>N;
    Pole pole[N];
    for(int i=0;i<N;i++){
        cin>>pole[i];
    }

    for(int i=0;i<N;i++){
        pocet++;
        if(pole[i]<nejmensi){
            nejmensi=pole[i];
            poradi=pocet;
        }

        if(pole[i]<10000){
            pocetMesicu++;
        }
    }
    
    

    cout<<"Pocet mesicu kdy byli náklady mensi nez 10000 : "<<pocetMesicu<<endl;
    cout<<"Poradi mesice s nejnizsimi naklady : "<<poradi<<endl;
    return 0;
}