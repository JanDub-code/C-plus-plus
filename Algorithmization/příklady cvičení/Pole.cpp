#include <iostream>
#include <iomanip>
using namespace std;

const int N=1000;
typedef int Typpole[N];

int sumapole(Typpole Pole, int pocet){
    int suma=0;
    for (int i = 0; i < pocet; i++) {
        suma+=Pole[i];
    }
    return suma;
}

double prumerPole(Typpole Pole, int pocet){
    return (double)sumapole(Pole, pocet)/pocet;
}

int nadprumer(Typpole Pole,int pocet){
    int nadprumernych=0;
    for(int i=0;i<pocet;i++){
       if(prumerPole(Pole,pocet)<Pole[i])
            nadprumernych++;
}
return nadprumernych;
}

int vetsinezPosledni(Typpole pole,int pocet){
    int vetsich=0;
    for (int i=0;i<pocet;i++){
        if(pole[i]>pole[pocet-1]){
            vetsich++;
        }
    }
    return vetsich;
}

int main(){
    Typpole pole;
    int cisla=0;
    while(cin>>pole[cisla] and pole[cisla]!=-333){
        cisla++;
    }

    cout<<"Průměr je : "<<prumerPole(pole, cisla)<<endl;
    cout<<"nadprumernych je : "<<nadprumer(pole,cisla)<<endl; 
    cout<<"vetsich nez posledni je : "<<vetsinezPosledni(pole,cisla)<<endl;
 
    int pocty[10];
    int cisla1;
    for(int i=0;i<10;i++){
        pocty[i]=0;
    }

    while(cin>>cisla1 and cisla1!=-333){
        while(cisla1 !=0){
            pocty[cisla1%10]++;
            cisla1/=10;
        }
    }
    for(int i=0;i<10;i++){
        cout<<"počet "<<i<<" je : "<<pocty[i]<<endl;
    }
 
    return 0;
}