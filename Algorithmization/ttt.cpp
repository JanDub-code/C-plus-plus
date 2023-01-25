#include <iostream>
using namespace std;
int pocetpismen;
int pocetcisel;
int celek;

int main(){
	string ahoj="a0nj1skf54 adsd45 a24das";
	for(int i=0;i<ahoj.length();i++){
if(ahoj[i]>='a' && ahoj[i]<='z'){
ahoj[i]= ahoj[i] -32;
}
}

for(int i=0;i<ahoj[i]!='\0';i++){
if(ahoj[i]>='A' && ahoj[i]<='Z'){
pocetpismen++;
}
if(ahoj[i]>='0' && ahoj[i]<='9'){
pocetcisel++;
}
}
int celek=pocetcisel+pocetpismen;
float procentacisla= (float(pocetcisel)/float(celek))*100;

cout<<ahoj<<endl;
cout<<procentacisla;

    return 0;
}