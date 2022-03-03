#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, r;
    cin >> n;
    while(n != 0) {
        r = sqrt(n);
        cout << ((n - r) / r) - 1 + r << endl;
        cin >> n;
    }
}