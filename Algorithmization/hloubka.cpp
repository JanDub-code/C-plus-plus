#include <iostream>

struct Uzel {
int value;
Uzel *left;
Uzel *right;
};

int hladina(Uzel*pr){
        if(pr==nullptr){
            return 0;
        }
        else{
            int lev=hladina(pr->levy);
            int prav=hladina(pr->pravy);
        }
        if(int lev<int prav){
            return prav+1;
        }
        else{
            return lev+1;
        }
    }


int main(){
    
    return 0;
}