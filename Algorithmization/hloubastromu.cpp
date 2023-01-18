#include <iostream>
using namespace std;

struct Prvek{
    char *hodnota;
    Prvek*levy;
    Prvek*pravy;
};

int hladina(Prvek*pr){
        if(pr==nullptr){
            return 0;
        }
        else{
            int lev=hladina(pr->levy);
            int prav=hladina(pr->pravy);
        }
        if(lev<prav){
            return prav+1;
        }
        else{
            return lev+1;
        }
    }
int main(){
    
    return 0;
}