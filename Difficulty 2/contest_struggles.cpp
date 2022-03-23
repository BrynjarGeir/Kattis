#include <iostream>
using namespace std;

int main() {
    double n, k, d, s, proportion, ans;
    cin >> n >> k >> d >> s;
    cout << fixed;

    proportion = k / n;
    if(proportion == 1) return 0;
    ans = (d - proportion*s) / (1-proportion);
    if(ans >= 0 && ans <= 100) cout << ans;
    else cout << "impossible";
}