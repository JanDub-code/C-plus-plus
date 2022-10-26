#include <iostream>
using namespace std;

int main() {
    int a=30;
    int b=0;
    int c;

    cin >> c;
    while(c>10){
        c++;
        a+=++b-c;
        cin >>c;
    }cout<<"a : "<< a<<endl;
    cout <<"b : "<<b<<endl;
    cout <<"c : "<<c<<endl;



    return 0;
}