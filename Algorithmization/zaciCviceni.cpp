#include <iostream>
#include <fstream>
using namespace std;


int main(){
    string jmeno;
    string prijmeni;
    string trida;
    char pohlavi;
    float prumer;
    string jm;
    string line;
    cout<<"vyhledani podle jmena :";
    cin>>jm;
    ifstream vstup("zaci.txt");
     while(vstup>>jmeno>>prijmeni>>trida>>pohlavi>>prumer){
        if(jm==jmeno){

        cout<<jmeno<<", "<<prijmeni<<", "<<trida<<", "<<pohlavi<<", "<<prumer<<endl;
    }
    }
    vstup.close();
    return 0;
}