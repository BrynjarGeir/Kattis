#include <iostream>
using namespace std;

int sumDigits(int i) {
    int ans = 0;
    while (i > 0) {
        ans += i % 10;
        i /= 10;
    }
    return ans;
}

int main() {
    int L, D, X, N, M;
    cin >> L;
    cin >> D;
    cin >> X;

    for (int i = L; i <= D; i++) {
        int sd = sumDigits(i);
        if (sd == X) {
            N = i;
            break;
        }
    }

    for (int i = D; i >= L; i--) {
        int sd = sumDigits(i);
        if (sd == X) {
            M = i;
            break;
        }
    }

    cout << N << endl << M;
}