#include <iostream>
#include <math.h>
using namespace std;

int main() {
    string pass1, pass2;
    cin >> pass1 >> pass2;

    int diffs = 0;
    for(int i = 0; i < 4; i++) {
        if(pass1.at(i) != pass2.at(i)) diffs++;
    }

    cout << pow(2, diffs);
}