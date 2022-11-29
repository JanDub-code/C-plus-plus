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
};
void vypisMatici(typMatice pole, int radky, int sloupce){
  for(int i = 0; i<radky; i++){
      vypisPole(pole[i],sloupce);
  }
  cout<<endl;
};

int main(){
    typMatice mat;
    int N=5;

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            mat[i][j] = i+j;
        }
    }
    vypisMatici(mat,3,3);


    return 0;
}


