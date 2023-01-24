#include <iostream>
#include <fstream>
using namespace std;

int main(){
int pole[10000];
int index=0;
ifstream vstup("cisla.txt");
if(vstup.is_open()){
    while(vstup>>pole[index]){
        index++;
    }
    vstup.close();
}else{
    cerr << "Nepodařilo se otevřít soubor cisla.txt" << endl;
    return 1;
}
for(int i=0;i<index;i++){
    cout<<pole[i]<<endl;
}
return 0;
}