#include <iostream>
using namespace std;

int cislo,faktorial =1;
int a,d;

//priklady na xturcin0

int main(){
    cout <<"vloz cele nezaporne cislo"<<endl;
    cin >> cislo;
//faktorial
    if(cislo>0){
        while(cislo>0){
            faktorial = faktorial*cislo;
            cislo--;
        }cout << faktorial << endl;

    }else{
        cout <<"zadal si zaporne cislo";
    }

    int n=0;
    cout<<"vloz prvni cislo posloupnosti"<<endl;
    cin>>a;
    cout<<"rozdil mezi cleny posloupnosti"<<endl;
    cin>>d;
// aritmeticka posloupnost
    if(d>0){
        while(n<50){
            if(n %10 ==0){
                cout<<endl;
            }
            cout<<a<<",";
            a += d;
            n++;
        }
    }else {
        cout<<"zaporna hodnota";
    }    
    return 0;
}

