#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    while(cin >> n) {
        if (n < 3) cout << 1 << endl;
        else {
            int ans = (int)floor(((n+0.5) * log(n) - n + 0.5 * log(2 * M_PI))/ log(10)) + 1;
            cout << ans << endl;
        }
    }
}