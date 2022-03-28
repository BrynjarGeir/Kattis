#include <iostream>
using namespace std;

int main() {
    int S;
    cin >> S;

    cout << S << ":" << endl;
    int p = 1;
    if(S % 2 == 1) p++;
    for(int x = 2; x < S/2 + p; x++) {
        int y = x - 1;
        if(S % (x + y) == x || S % (x + y) == 0) {
            cout << x << "," << y << endl;
        }
        if(S % x == 0) {
            cout << x << "," << x << endl;
        }
    }
}