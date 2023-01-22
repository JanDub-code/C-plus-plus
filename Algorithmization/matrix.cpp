#include <iostream>
using namespace std;

int main(){
    int hodnost;
    cin>>hodnost;
    int matrix[hodnost][hodnost];
    int matrix2[hodnost][hodnost];
    int soucet[hodnost][hodnost];
    for(int i=0;i<hodnost;i++){
        for(int j=0;j<hodnost;j++){
            cout<<"vloz element"<<i+1<<j+1;
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<hodnost;i++){
        for(int j=0;j<hodnost;j++){
            cout<<"vloz element"<<i+1<<j+1;
            cin>>matrix2[i][j];
        }
    }

    for(int i=0;i<hodnost;i++){
        for(int j=0;j<hodnost;j++){
            soucet[i][j]=matrix[i][j]+matrix2[i][j];
        }
    }

    for(int i=0;i<hodnost;i++){
        for(int j=0;j<hodnost;j++){
            cout<<soucet[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}