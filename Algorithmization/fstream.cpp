#include <iostream>
#include <fstream>

using namespace std;
//create function to create new file and write to it 
void createFile(string fileName) {
    ofstream file;
    file.open(fileName);
    file << "Hello World" << endl;
    file.close();
}

void readFile(string fileName) {
    ifstream file;
    file.open(fileName);
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

int main() {
    createFile("test.txt");
    readFile("test.txt");
    
    
    
    return 0;
}