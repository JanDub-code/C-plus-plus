#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a0, q, a, s = 0;
    cout << "Zadejte prvni clen geometrické posloupnosti a0: ";
    cin >> a0;
    cout << "Zadejte kvocient q: ";
    cin >> q;

    if (q >= 1 || q <= -1) {
        cerr << "Chyba: Posloupnost nekonverguje k nule." << endl;
        return 1;
    }

    a = a0;
    while (abs(a) > 1e-4) {
        s += a;
        a *= q;
    }

    cout << "Soucet geometrické posloupnosti je: " << s << endl;

    return 0;
}