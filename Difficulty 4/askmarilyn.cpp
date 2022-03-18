#include <iostream>
#include <random>
using namespace std;

int main() {
    int rounds_left = 1000;
    char door, there, correct, actual;

    while(rounds_left--) {
        int r = rand() % 3;
        if(r == 0) cout << 'A' << endl;
        else if(r == 1) cout << 'B' << endl;
        else cout << 'C' << endl;
        cin >> door >> there;

        if(door == 'A' && there == '1') cout << 'A' << endl;
        else if(door == 'A' && r == 0) {
            r = rand() % 2;
            if(r) cout << 'B' << endl;
            else cout << 'C' << endl;
        } else if(door == 'A') {
            if (r == 1) cout << 'C' << endl;
            else cout << 'B' << endl;
        }
        else if(door == 'B' && there == '1') cout << 'B' << endl;
        else if(door == 'B' && r == 1) {
            r = rand() % 2;
            if(r) cout << 'C' << endl;
            else cout << 'A' << endl;
        } else if(door == 'B') {
            if(r == 0) cout << 'C' << endl;
            else cout << 'A' << endl;
        }
        else if(door == 'C' && there == '1') cout << 'C' << endl;
        else if(door == 'C' && r == 2) {
            r = rand() % 2;
            if(r) cout << 'B' << endl;
            else cout << 'A' << endl;
        } else if(door == 'C') {
            if(r == 0) cout << 'B' << endl;
            else cout << 'A' << endl;
        }
        cin >> correct >> actual;
    }
}