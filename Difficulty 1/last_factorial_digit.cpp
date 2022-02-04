#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, number;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> number;
        if (number == 1) {
            cout << 1 << endl;
        } else if (number == 2) {
            cout << 2 << endl;
        } else if (number == 3) {
            cout << 6 << endl;
        } else if (number == 4) {
            cout << 4 << endl;
        } else {
            cout << 0 << endl;
        }
    }

}