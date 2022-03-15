#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    double N, M, S, ans;
    double measured = 0, showed = 0;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> S >> M;
        S *= 60;
        measured += M;
        showed += S;
    }
    ans = measured / showed;
    if(ans > 1) cout << fixed << setprecision(10) << ans;
    else cout << "measurement error";
}