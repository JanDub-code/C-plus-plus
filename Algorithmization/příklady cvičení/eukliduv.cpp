#include <iostream>
using namespace std;

unsigned int eukliduv(unsigned int a, unsigned int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int main(){
cout<<eukliduv(38, 18)<<endl;
return 0;
}