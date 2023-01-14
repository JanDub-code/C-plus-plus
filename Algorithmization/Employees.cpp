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

int main() {
    pracovnik pracovnici[5] = {{"1", 1000, 1}, {"2", 2000, 1}, {"3", 3000, 2}, {"4", 4000, 2}, {"5", 5000, 3}};
    pracoviste pracovista[3] = {{0, 0}, {0, 0}, {0, 0}};
    for (int i = 0; i < 5; i++) {
        pracovista[pracovnici[i].pracoviste - 1].suma += pracovnici[i].plat;
        pracovista[pracovnici[i].pracoviste - 1].pocet++;
    }
    for (int i = 0; i < 3; i++) {
        cout << "Pracoviste " << i + 1 << " ma prumerne plat " << pracovista[i].suma / pracovista[i].pocet << endl;
    }

    return 0;
}