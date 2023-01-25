#include <iostream>
using namespace std;

int main() {
    int digit_count = 0;
    int total_count = 0;
    char current_char;

    while (cin >> noskipws >> current_char) {
        if (current_char == 'X') {
            break;
        }
        if (isdigit(current_char)) {
            digit_count++;
        }
        total_count++;
    }

    double percentage = (digit_count * 100.0) / total_count;
    cout << percentage << "% of all characters are digits." << endl;

    return 0;
}