#include <iostream>
using namespace std;

typedef int pole;
typedef pole Matice;



int main() {
    
    int N;
    //řad matice
    cin>>N;
    Matice matice[N][N];

    //naplnit matici kus po kusu
    /*
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>matice[i][j];
        }
    }
    */

   //hlavni diagonala
   /*
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
            cin>>matice[i][j];
            }else {
                matice[i][j]=0;
            }
        }
    }
    */

    //vedlejsi diagonala
    /*
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(N-i-1==j){
            cin>>matice[i][j];
            }else {
                matice[i][j]=0;
            }
        }
    }
    */

   //po sloupcích
   /*
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>matice[j][i];
        }
    }
    */

   //po spirale
    //create spiral matrix
  /*  void naplnMaticiSpirala(Matice matice, int N){
  int poc=0,r=0,s=0, pom;
  for(int i = 0; i<N; i++){
    pole[r][i] = ++poc;
  }
  s=N-1;
  pom=N-1;
  while (pom>0){
    if (r < N/2){
      for(int i = r+1; i<r+pom+1; i++){
        pole[i][s] = ++poc;
      }
      r = r+pom;
      for(int i = s-1; i>s-pom-1; i--){
        pole[r][i] = ++poc;
      }
      s = s-pom;
    }
    else{
      for(int i = r-1; i>r-pom-1; i--){
        pole[i][s] = ++poc;
      }
      r = r-pom;
      for(int i = s+1; i<s+pom+1; i++){
        pole[r][i] = ++poc;
      }
      s = s+pom;
    }
    pom--;
  }
}}
*/

    int M;
    cin>>M;

    Matice matice1[N][M];

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>matice1[i][j];
        }
    }

    int suma=0;
    int nejvic=0;
    int pozice=0;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<<matice1[i][j]<<" ";
            suma+=matice1[i][j];
            if(suma>nejvic){
                nejvic=suma;
                pozice=i+1;
            }
        }
        suma=0;
        cout<<endl;
    }
    cout<<"nejvetsi soucet radku ma radek : "<<pozice<<endl;

    //prohodime nejmensi a nejvetsi za sebe
    int nejmensii=0;
    int nejvetsii=0;
    int hodnotanejmensi=100;
    int hodnotanejvetsi=0;
        int nejmensij=0;
    int nejvetsij=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(matice1[i][j]<hodnotanejmensi){
                nejmensii=i;
                nejmensij=j;
                hodnotanejmensi=matice1[i][j];
            }
            if(matice1[i][j]>hodnotanejvetsi){
                nejvetsii=i;
                nejvetsij=j;
                hodnotanejvetsi=matice1[i][j];
            }
            

        }
    }
    matice1[nejvetsii][nejvetsij]=hodnotanejmensi;
    matice1[nejmensii][nejmensij]=hodnotanejvetsi;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<<matice1[i][j]<<" ";
        }
        cout<<endl;
    }   

    return 0;
}