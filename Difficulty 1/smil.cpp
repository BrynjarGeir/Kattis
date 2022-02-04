#include <iostream>
using namespace std;

int main() {
    string line;

    getline(cin, line);

    int i = 0;

    while (i < line.size()-1) {
        if ((line[i] == ':' || line[i] == ';') && (line[i+1] == ')')) {
            cout << i << endl;
            i += 2;
        } else if ((i < line.size()-2) && (line[i] == ':' || line[i] == ';') && (line[i+1] == '-') && (line[i+2] == ')')) {
            cout << i << endl;
            i += 3;
        } else {
            i += 1;
        }
    }
}