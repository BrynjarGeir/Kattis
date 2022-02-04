#include <iostream>
using namespace std;

int main() {
    int pos = 1;
    string moves;
    cin >> moves;

    for (char c: moves) {
        if ((c == 'A') && ((pos == 1) || (pos == 2))){
            if (pos == 1) {
                pos = 2;
            } else {
                pos = 1;
            }
        } else if ((c == 'B') && ((pos == 2) || (pos == 3))) {
            if (pos == 2) {
                pos = 3;
            } else {
                pos = 2;
            }
        } else if ((c == 'C') && ((pos == 1) || (pos == 3))) {
            if (pos == 1) {
                pos = 3;
            } else {
                pos = 1;
            }
        }
    }

    cout << pos;
}