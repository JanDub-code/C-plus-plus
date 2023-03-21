#include <iostream>
using namespace std;
typedef int typpole;

int main(){
    int N;
    cout<<"kolik elementů bude mít pole";
    cin>>N;
    typpole pole[N];

    //průměr pole a počet členů
    float suma;

    for(int i=0;i<N;i++){
        cout<<"vloz do elementu pole : ";
        cin>>pole[i];
        suma+=pole[i];
    }

    cout<<"prumer pole je : "<< (suma/float(N))<<" počet elementů je : "<<N<<endl;

    // nyní vyčteme elementy v opačném pořadí
    for(int i=N-1;i>-1;i--){
        cout<<"element číslo "<<i<<" je : "<<pole[i]<<endl;
    }
    
    return 0;
}