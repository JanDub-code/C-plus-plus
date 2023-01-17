#include <iostream>
#include <cmath>
using namespace std;

void sinus(float x, float e){
    int i=3;float s=x;float sum=x;int pocet=0;
    while(abs(s)>e){
        s = -s*x*x/(i*(i-1));
        sum += s;
        i += 2;
        cout<<i<<endl;
        pocet++;
    }
    cout<<"sinus je : "<<sum<<" a pocet kroku :"<<pocet<<endl;
    

}

int main() {
    float x=2;
    float presition = 0.0001;

    sinus(x,presition);
    cout<<sin(x)<<endl;

   
    return 0;
}