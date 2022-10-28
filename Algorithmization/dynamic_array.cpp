#include <iostream>
using namespace std;

int pole[300];  // Je ekvivalentni int*pole; 
                // pole = new int[300];
// pole je pouze dynamická struktura, která je alokována na zásobníku

//int *I;
//I = new int;
//*I =17;

//podprogram
typedef int typpole[300];
void delej(typpole P){
    P[30]=118;
}

int main() {
    pole[58] = 5;
    cout << pole[58]<<endl;

    typpole A;
    A[30]=17;

    delej(A);
    cout << A[30]<<endl;
    return 0;
}