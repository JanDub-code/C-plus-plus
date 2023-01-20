#include <iostream>
#include <iomanip>
using namespace std;
const int maxRozsah = 100;
typedef int typPole[maxRozsah];
typedef typPole typMatice[maxRozsah];
void vypisPole(typPole pole, int pocet){
  for(int i = 0; i<pocet; i++){
      cout<< setw(5)<< pole[i];
  }
  cout<<endl;
}
void vypisMatici(typMatice pole, int radky, int sloupce){
  for(int i = 0; i<radky; i++){
      vypisPole(pole[i],sloupce);
  }
  cout<<endl;
}

int main(){
    typMatice mat;
    int N;
    cin>>N;
    for(int r=0; r<N;r++)
        for(int s=0; s<N;s++)
            mat[r][s]=1;
    for(int r=0; r<N;r++)
        mat[r][r]=0;
    for(int r=0; r<N;r++)
        mat[r][N-1-r]=2;
    for(int r=0; r<N;r++)
        for(int s=0; s<N;s++)
            mat[s][r]=r*N+s +1;
    vypisMatici(mat,N,N);
    
    
    return 0;
}