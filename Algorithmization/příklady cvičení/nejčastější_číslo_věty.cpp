#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input); 
    int maxCount = 0; 
    char mostCommonDigit = '\0'; 
    for (char c = '0'; c <= '9'; c++) { 
        int count = 0; 
        for (size_t i = 0; i < input.length(); i++) { 
            if (input[i] == c) {
                count++; 
            }
        }
        if (count > maxCount) { 
            mostCommonDigit = c;
        }
    }
    cout <<"nejčastější : "<< mostCommonDigit<<"kolikrat : "<<maxCount <<"x"<< endl; // vypíšeme nejčastější cifru
    return 0;
}


