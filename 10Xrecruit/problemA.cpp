#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, r;
    cin >> n;
    while(n != 0) {
        if (n == 1) cout << 0 << endl;
        else if (n == 2) cout << 1 << endl;
        else {
            r = ceil((-1 + sqrt(1+8*n))/2);
            cout << r << endl;
        }
        cin >> n;
    }
}