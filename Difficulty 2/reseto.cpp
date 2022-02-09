#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, k = 0, n = 2, i;
    cin >> N >> K;

    bool numbers[N-2] = {0};

    while (k < K) {
        i = n;
        while (i <= N) {
            if (!numbers[i-2]) {
                numbers[i-2] = true;
                k++;
            }
            if (k == K) {
                cout << i;
                return 0;
            }
            i += n;
        }
        while (numbers[n-2] == true) {
            n += 1;
        }
    }

    cout << i;


}