#include <fstream>
#include <iostream>
using namespace std;

void removeSpaces(string inFile, string outFile) {
    ifstream in(inFile);
    ofstream out(outFile);

    if (!in || !out) {
        cout << "Error opening files!" << endl;
        return;
    }

    char ch;
    while (in.get(ch)) {
        if (!isspace(ch)) {
            out.put(ch);
        }
    }

    cout << "File copied successfully without spaces.\n";
    in.close();
    out.close();
}

int main() {
    string inFile = "input.txt";
    string outFile = "output.txt";
    removeSpaces(inFile, outFile);
    return 0;
}