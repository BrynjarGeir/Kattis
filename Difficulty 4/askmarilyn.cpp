#include <iostream>
#include <random>
using namespace std;

int main() {
    int rounds_left = 1000;
    char door, there, correct, actual;

    while(rounds_left--) {
        cout << 'A' << endl;
        cin >> door >> there;

        if(door == 'A' && there == '1') cout << 'A' << endl;
        else if(door == 'A') cout << 'B' << endl;
        else if(door == 'B' && there == '1') cout << 'B' << endl;
        else if(door == 'B') cout << 'C' << endl;
        else if(door == 'C' && there == '1') cout << 'C' << endl;
        else if(door == 'C') cout << 'B' << endl;
        cin >> correct >> actual;
    }
}