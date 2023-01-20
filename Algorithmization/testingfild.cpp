#include <iostream>
#include <cmath>
using namespace std;

void sinus(float x,float e){
    float s=x;float suma=s;int pocet=0;int i=3;
    while(abs(s)>e){
    s=(-s*x*x)/(i*(i-1));
    suma +=s;
    pocet ++;
    i +=2;
}
cout<<"sinus je : "<<suma<<" ,pocet cyklu : "<<pocet<<endl;
}

int main(){
    float x=0.5;
    float e=0.0001;

    sinus(x,e);
    cout<<sin(x);
    return 0;
}