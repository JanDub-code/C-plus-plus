#include <iostream>
using namespace std;

int main() {
string ano="hehe";

for(int i=0;i<ano.length();i++){
    ano[i]=toupper(ano[i]);
    cout<<ano[i];
}


return 0;
}