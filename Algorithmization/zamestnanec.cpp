#include <iostream>
using namespace std;

struct pracovnic{
    string identifikace;
    float hodiny;
    int pracoviste;
};

int main(){
    int N=5;
    pracovnic pracovnici[N];
    for (int i = 0; i < N; i++) {
        cout << "Zadejte identifikaci, pocet hodin a cislo pracoviste: ";
        cout<< N<<"N"<<i<<"i";
        cin >> pracovnici[i].identifikace >> pracovnici[i].hodiny >> pracovnici[i].pracoviste;
        N++;
    }   
    
    for(int i=0; i<N; i++){
        cout << pracovnici[i].identifikace << ", " << pracovnici[i].hodiny << ", " << pracovnici[i].pracoviste << endl;
    }

    return 0;
}
