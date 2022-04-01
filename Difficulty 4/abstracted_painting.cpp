#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int R, C;
        cin >> R >> C;

        unsigned long long ans = pow(3, R + C) * pow(2, R * C);
        ans %= 1000000007;
        cout << ans << endl;
    }
}