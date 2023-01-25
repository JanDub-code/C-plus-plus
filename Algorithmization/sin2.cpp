#include <iostream>
#include <math.h>
using namespace std;

void sinus(float x,float e){
    float s=x;float suma =s;int pocet;int i=3;
    while(abs(s)>e){
        s=((-s*x*x)/(i*(i-1)));
        suma+=s;
        i+=2;
        pocet++;    
    }
    cout<<"sinus je : "<<suma<<" , a pocet cyklu je : "<<pocet;
}

int main(){
    float x=0.5;
    float e=0.0001;

    cout<<sin(x)<<endl;
    sinus(x,e);

    return 0;
}