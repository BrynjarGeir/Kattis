#include <iostream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    bool left = true;
    int bars = 0;
    for (char c: line) {
        if ((c == '(') || (c == ')')) {
            left = false;
            continue;
        }
        if (left) {
            bars += 1;
        } else {
            bars -= 1;
        }
    }
    if (bars == 0) {
        cout << "correct";
    } else {
        cout << "fix";
    }
}