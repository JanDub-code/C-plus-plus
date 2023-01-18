#include <iostream>
using namespace std;

int main(){
    int numberOfNumbers = 0;
    int i=1;
    int sumOfNumbers;
    float dispersion=0;
    float average;
    float N;

    while(cin>>N){
        sumOfNumbers += N;
        numberOfNumbers++;
        average = sumOfNumbers/numberOfNumbers;
        dispersion+=(1/(numberOfNumbers))*((N-average)*(N-average));
    }


    return 0;
}