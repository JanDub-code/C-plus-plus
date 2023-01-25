#include <iostream>
using namespace std;
int pocet;
int pocetcisel;
int pocetpismen;


int main(){
    string ano="askl15sd85sd54das5daZC1";
    for(int i=0;i<ano.length();i++){
        ano[i]=tolower(ano[i]);
    }
    cout<<ano<<endl;

    for(int i=0;i<ano.length();i++){
        pocet++;
        if(ano[i]>='0' && ano[i]<='9'){
            pocetcisel++;
        }
        if((ano[i]>='a' && ano[i]<='z') || (ano[i]>='A' && ano[i]<='Z')){
            pocetpismen++;
        }
    }
    float procentacisel=((float)pocetcisel/pocet)*100;
cout<<pocet<<" , "<<pocetcisel<<" , "<<pocetpismen<<endl;
cout<<procentacisel<<"%";

return 0;


    return 0;
} 