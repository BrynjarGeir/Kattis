#include <iostream>
#include <math.h>
using namespace std;

int getP(int n) {
    int p = 2;
    for (int i = 0; i < n-1; i++) {
        p = p + pow(2,i);
    }

    return p;
}

int main() {
    int N;

    cin >> N;

    double p = getP(N);

    if (N == 0) {
        cout << pow(p,2);
        return 0;
    }

    double ans = pow(p+pow(2,N-1), 2);

    cout << fixed << (int)ans;
}