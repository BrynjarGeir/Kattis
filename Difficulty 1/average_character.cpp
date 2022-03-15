#include <iostream>
using namespace std;

int main() {
    string line;
    int average = 0;
    getline(cin, line);

    for(char c: line) {
        average += c;
    }

    char c = average / line.size();

    cout << c;
}