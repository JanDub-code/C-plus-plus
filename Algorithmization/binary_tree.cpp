#include <iostream>
using namespace std;

struct Cislo{
    int cislo;
    Cislo* pravy;
    Cislo* levy;
};

void add(Cislo*&x,int c){
    if(x==nullptr){
        x=new Cislo;
        x->cislo=c;
        x->levy=nullptr;
        x->pravy=nullptr;
    }
    else{
        if(c<x->cislo){
            add(x->levy,c);
        }
        else{
            add(x->pravy,c);
        }
    }
}

void read(Cislo*x){
    if(x!=nullptr){
        read(x->levy);
        cout<<x->cislo<<endl;
        read(x->pravy);
    }
}

int main(){
    Cislo* cisla=nullptr;
    int c;
    int y[6]={5,8,2,4,7,6};
    for(int i=0;i<6;i++){
        add(cisla,y[i]);
    }
    read(cisla);
    return 0;
}