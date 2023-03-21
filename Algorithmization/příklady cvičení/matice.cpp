#include <iostream>
using namespace std;

typedef int pole;
typedef pole matice;

int main() {
    //vytvoříme a vypíšeme čtvercovou matici řádu dle určení
    int N;
    cout<<"řád matice : ";
    cin>>N;
    matice mat[N][N];



    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<"načti pozici "<<i+1<<j+1<<" : ";
            cin>>mat[i][j];
        }
    }
    // vypis matice
     for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    



    return 0;
}