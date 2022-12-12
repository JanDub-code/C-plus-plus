#include <iostream>
#include <fstream>
using namespace std;
typedef struct Student Student;
struct Student {
  string jmeno;
  string prijmeni;  
  char pohlavi;
  string trida ;
  float prumer;
  Student* levy;
  Student* pravy;
};
void nactiStudenta(Student &s){
    cout<< "jmeno: ";
    cin>>s.jmeno;
    cout<< "prijmeni: ";
    cin>>s.prijmeni;
    do{
      cout<< "pohlavi: ";
      cin>>s.pohlavi;
    }while(s.pohlavi!='m' and s.pohlavi!='z');
    cout<< "trida: ";
    cin>>s.trida;
    cout<< "prumer: ";
    cin>>s.prumer;
    s.levy=nullptr;
    s.pravy=nullptr;
}
void vypisStudenta(Student s){
    cout<<s.jmeno<<" "<<s.prijmeni<<"("<<s.trida<<") :"<<s.prumer<< " - "<<s.pohlavi<<endl;
}
int hloubka(Student* s){
  int leva,prava;
  if(s==NULL){
      return 0;
  }
  else{
    leva=hloubka(s->levy);
    prava=hloubka(s->pravy);
    if(leva>prava){
      return leva+1;
    }
    else{
      return prava+1;
    }
  }
}
int pocetPotomku(Student* s){
  int leva,prava;
  if(s==NULL){
      return 0;
  }
  else{
    return pocetPotomku(s->levy)+pocetPotomku(s->pravy)+1;
  }
}
void pridejDoStromu(Student* &strom, Student* st){
    if(strom==NULL){
        strom=st;
    }
    else{
      if(hloubka(strom->levy)>hloubka(strom->pravy)){
        pridejDoStromu(strom->pravy,st); 
      }else{
        pridejDoStromu(strom->levy,st);  
      }  
    }
}
void vypisStrom(Student* s, int hladina){
  if(s!=NULL){
    for(int i=0; i<hladina;i++){
      cout<<"--";
    }
    vypisStudenta(*s);
    vypisStrom(s->levy,hladina+1);
    vypisStrom(s->pravy,hladina+1);
  }
}
void nactiSoubor(Student* &strom, string nazev){
  ifstream vstup(nazev);
  if(vstup.is_open() and !vstup.eof()){
    while(!vstup.eof()){
      Student* pom = new Student;
      vstup>>pom->jmeno>>pom->prijmeni>>pom->trida>>pom->pohlavi>>pom->prumer;
      pom->levy=nullptr;
      pom->pravy=nullptr;
      pridejDoStromu(strom,pom);
    }
  }
}
int main(){
  Student* trida=nullptr;
  nactiSoubor(trida,"zaci.txt");
  vypisStrom(trida,0);
    return 0;
}