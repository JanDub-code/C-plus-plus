#include <iostream>
#include <cmath>
using namespace std;

int a,b,c;

int main() {
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    int D= pow(b,2) - 4*a*c;
    int x1 = (-b + sqrt(D))/2*a;
    int x2 = (-b - sqrt(D))/2*a;

    if(D>0){                     // 2 real roots 
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }else if(D==0){
        cout<<"x = "<<x1<<endl; //x1=x2
    }else{
        cout<<"No solution"<<endl; //we cannot take square root of negative number
    }
    return 0;
}