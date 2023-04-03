#include <iostream>
#include <fstream>
using namespace std;
struct Student{
  string jmeno;
  string prijmeni;  
  char pohlavi;
  string trida;
  float prumer;
  Student* dalsi;
} ;
typedef struct Student Student;
void nactiStudenta(Student &s){
    cout<<"jmeno: ";
    cin>>s.jmeno;
    cout<<"prijmeni: ";
    cin>>s.prijmeni;
    cout<<"trida: ";
    cin>>s.trida;
    cout<<"pohlavi(m/z): ";
    cin>>s.pohlavi;
    while(s.pohlavi!='m' and s.pohlavi!='z'){
        cout<<"pohlavi(m/z): ";
        cin>>s.pohlavi;
    }
    cout<<"prumer: ";
    cin>>s.prumer;
    s.dalsi=nullptr;
}
    
void vypisStudenta(Student s){
    cout<<"jmeno: " << s.jmeno<<endl;
    cout<<"prijmeni: "<<s.prijmeni<<endl;
    cout<<"trida: "<<s.trida<<endl;
    cout<<"pohlavi: "<<s.pohlavi<<endl;
    cout<<"prumer: "<<s.prumer<<endl;
}    
    
void pridejNaZacatek(Student* &s){
    Student* pom = new Student;
    nactiStudenta(*pom);
    pom->dalsi=s;
    s=pom;
}
void pridejNaKonec(Student* &s){
    if(s==nullptr){
       s = new Student; 
       nactiStudenta(*s);
    }
    else{
       Student* pom = s;
       while(pom->dalsi!=nullptr){
           pom=pom->dalsi;
       }
       pom->dalsi = new Student;
       nactiStudenta(*pom->dalsi);
    }
}
void vypisSeznam(Student* s){
    while(s!=nullptr){
        vypisStudenta(*s);
        cout<<"-------------------------------------"<<endl;
        s=s->dalsi;
    }
    cout<<endl<<endl;
}
void odeberZacatek(Student* &s){
    if(s!=nullptr){
        Student* pom = s;
        s = s->dalsi;
        delete pom;
    }
}
void odeberKonec(Student* &s){
    if(s!=nullptr){
        if(s->dalsi==nullptr){
            delete s;
            s = nullptr;
        }
        else{
            Student* pom = s;
            while(pom->dalsi->dalsi!=nullptr){
               pom = pom->dalsi; 
            }
            delete pom->dalsi;
            pom->dalsi=nullptr;
        }
    }
}
int pocetStudentu(Student* s){
    int poc=0;
    while(s!=nullptr){
        s=s->dalsi;
        poc++;
    }
    return poc;
}
void nactiSoubor(Student* &s, string nazev){
    ifstream vstup(nazev);
    if(vstup.is_open()){
        Student* pom;    
        while(!vstup.eof()){
            pom = new Student;
            vstup>>pom->jmeno>>pom->prijmeni>>pom->trida>>pom->pohlavi>>pom->prumer;
            pom->dalsi = s;
            s = pom;
        }
        vstup.close();
    }
    
    
    
}

int main(){
   Student* st;
   nactiSoubor(st,"zaci.txt");
   cout<<pocetStudentu(st)<<endl;
   vypisSeznam(st);
   odeberZacatek(st);
   vypisSeznam(st);
   odeberKonec(st);
   vypisSeznam(st);
   
   
    return 0;
}