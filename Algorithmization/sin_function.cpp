#include <iostream>
#include <cmath>
using namespace std;

void sinus(float x,float e){
    int i =3;float s=x;float suma=s;int pocet=0;
    while(abs(s)>e){
    s=(-s*x*x)/(i*(i-1));
    i+=2;
    suma+=s;
    pocet++;
}
cout<<"sinus je : "<<suma<<" ,pocet pruchodu je : "<<pocet<<endl;
}

int main(){
    float x=0.5;
    float presnost=0.0001;

    sinus(x,presnost);
    cout<<sin(x);
    return 0;
}