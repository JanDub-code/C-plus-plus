#include <iostream>
using namespace std;
/*
Ahoj Frantisku,
srdecne Te zdravim ze sveho putovani po mexickych sopkach.
Dnes mam v planu asi tu nejznamejsi. Popocatepetl.
Její vrchol dosahuje 5426 m n. m. Lezi v centralni casti Mexika.
Jedna se o stratovulkán. Posledni erupce byla roku 2006.
Tak snad se dnes znovu nerozhohni.
Mej se krasne, kamarade!
Pavel*/

bool jePismeno(char c){
    return (c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z');
}

int main(){
    string input;
    
    int delka = 0;
    int maxDelka = 0;
    int pozice = 0;
    int aktualniPozice = 0;

    while(getline(cin, input) and input != "*"){
        pozice++;
        delka = 0;
        for (int i = 0; i < input.length(); i++) {
            if (jePismeno(input[i])) {
                delka++;
            }
            else {
                if (delka > maxDelka) {
                    maxDelka = delka;
                    aktualniPozice = pozice;
                }
                delka = 0;
            }
        }
    
    }
cout<<"nejdelší slovo je na řádku : "<<aktualniPozice<<" a má délku : "<<maxDelka<<" znaků"<<endl;

    return 0;
}