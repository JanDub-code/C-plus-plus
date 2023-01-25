#include <iostream>
#include <math.h>
using namespace std;

double coss(double x) {
    double result = 1;
    double term = 1;
    for (int i = 1; i <= 10; i++) {
        term = -term * x * x / (2 * i - 1) / (2 * i);
        result += term;
    }
    return result;
}

int main(){
    double x=2;
    cout<<coss(x);
    cout<<cos(x);
    return 0;
}