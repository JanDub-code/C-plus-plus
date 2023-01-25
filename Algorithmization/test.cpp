#include <iostream>
using namespace std;

struct Uzel{
int hodnota;
Uzel*pravy;
Uzel*levy;
};

int Hloubka(Uzel* u) {
    if (u == nullptr) {
        return 0;
    } else {
        int lev = Hloubka(u->levy);
        int prav = Hloubka(u->pravy);
        return max(lev, prav) + 1;
    }
}
  
void precti(Uzel*u){
    if(u!=nullptr){
        precti(u->levy);
        cout<<u->hodnota<<" ";
        precti(u->pravy);
    }
}
    

void pridej(Uzel*&u,int hodnota){
    if(u==nullptr){
        u=new Uzel;
        u->hodnota=hodnota;
        u->pravy=nullptr;
        u->levy=nullptr;
    }
    else{
        if(hodnota<u->hodnota){
            pridej(u->levy,hodnota);
        }else {
            pridej(u->pravy,hodnota);
        }
    }
};
    

int main(){
Uzel*u=nullptr;
pridej(u,10);
pridej(u,4);
pridej(u,7);
pridej(u,22);
precti(u);
Hloubka(u);

return 0;
}