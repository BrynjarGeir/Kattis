#include <iostream>
using namespace std;

int main() {
    string code;
    int days = 0, pos = 0;
    cin >> code;

    for (char c: code) {
        if (pos == 0) {
            if (c != 'P') {
                days++;
            }
            pos++;
        } else if (pos == 1) {
            if (c != 'E') {
                days++;
            }
            pos++;
        } else {
            if (c != 'R') {
                days++;
            }
            pos = 0;
        }
    }

    cout << days;
}