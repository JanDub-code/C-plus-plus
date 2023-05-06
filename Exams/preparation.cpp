#include <iostream>
using namespace std;

struct pracovnik{
    string id;
    int plat;
    int pracoviste;
};

struct pracoviste{
    float suma;
    int pocet;
};

struct pracovnic{
    string identifikace;
    float hodiny;
    int pracoviste;
};

int main(){

    /*
    int a,x,p;
    x=0;p=0;
    while(p<10){
        cin>>a;
        if(a>x){
            x=a;
        }
        p++;
        cout<<"a="<<a <<"  x="<<x<<"  p="<<p<<endl;
    }
    cout<<-x<<endl;
*/
/*
    float cena;
    char* datum=new char[8];
    char* maxdatum=new char[8];

    float predchoziCena;
    maxdatum = datum;
    predchoziCena=cena;
    int maxCena=-9999;
    cin>>cena;
    cin>>datum;

    while(datum!="X"){
        if(cena>=predchoziCena){
            if(cena-predchoziCena>maxCena){
                maxdatum=datum;
                maxCena=cena-predchoziCena;
            }
        }
        predchoziCena=cena;
        cin>>cena;
        cin>>datum;
    }
    cout<<maxdatum;
*/



    pracovnik pracovnici[5] = {{"1", 1000, 1}, {"2", 2000, 1}, {"3", 3000, 2}, {"4", 4000, 2}, {"5", 5000, 3}};
    pracoviste pracovista[3] = {{0, 0}, {0, 0}, {0, 0}};
    for (int i = 0; i < 5; i++) {
        pracovista[pracovnici[i].pracoviste - 1].suma += pracovnici[i].plat;
        pracovista[pracovnici[i].pracoviste - 1].pocet++;
    }
    for (int i = 0; i < 3; i++) {
        cout << "Pracoviste " << i + 1 << " ma prumerne plat " << pracovista[i].suma / pracovista[i].pocet << endl;
    }

    
    pracovnic pracovník[3];
    for(int i=0;i<3;i++){
        cout<<"zadej identifikaci : "<<endl;
        cin>>pracovník[i].identifikace;
        cout<<"zadej hodiny : "<<endl;
        cin>>pracovník[i].hodiny;
        cout<<"zadej pracoviste : "<<endl;
        cin>>pracovník[i].pracoviste;
    }
    float suma=0;
    float pocet=0;
    for(int i =0;i<3;i++) {
        if (pracovník[i].pracoviste==i){
            for(int i=0;i<3;i++){
                suma+=pracovník[i].hodiny;
                pocet++;
            }

        }
        
    }
    cout<<"Pracoviste "<<pracovník->pracoviste<<"pracovali průměrně"<<suma/pocet;

    return 0;
}