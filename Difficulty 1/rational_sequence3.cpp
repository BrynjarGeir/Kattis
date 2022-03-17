#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int frac[] = {0, 1};

int nthRational(int n) {
    if (n > 0) nthRational(n/2);
    frac[~n & 1] += frac[n & 1];
}

int main() {
    int P, K, N;

    cin >> P;
    while(P--) {
        cin >> K >> N;
        nthRational(N);
        cout << K << " " << frac[0] << "/" << frac[1] << endl;
    }
}