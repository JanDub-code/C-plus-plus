#include <iostream>
using namespace std;
#include <math.h>
string text="Roku 2030 se ocekava ze v brne bude zit 700000 ale z nich trvale bydliste ma 350000";

float sinus(float x,float presnost){
    float suma=0;float t=x;
    int n=1;
    while(abs(t)>presnost){
        suma+=t;
        t=-t*((x*x)/((2*n)*(2*n+1)));
        n++;
    }
    return suma;


}

int fakt(int n){
    int suma;
    if(n!=1){
        return  suma=n*fakt(n-1);
    }else if(n==0){
        return 1;
    }
}
//rekurze ciferny soucet
int cifernysoucet(int n){
    int suma;
        
    if(n!=0){
    suma+=n%10;
    n=n/10;
        
    cifernysoucet(n);
        }
    return suma;
}


int main(){
    cout<<(cifernysoucet(15))<<endl;
 
 cout<<(fakt(4))<<endl;
 /*
    char znak;
    int cislo;
    int max;
    cin.get(znak);
    int pocet=0;
    while(znak!='!'){
        while(znak>='0' and znak<='9'){
            cislo=cislo*10+znak+int(znak)-int('0');
            cin.get(znak);
        }
        if(cislo>0){
            if(cislo>max){
                max=cislo;
            }
            cislo=0;
        }else{
            cin.get(znak);
        }


    
    }
    std::cout<<max;
*/
    cout<<sin(1);
    float cislo=1;
    float presnost=0.000001;
    std::cout<<sinus(cislo,presnost);

    //rekurzivní faktorial

    


    return 0;
    
}